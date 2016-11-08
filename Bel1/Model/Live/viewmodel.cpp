#include "viewmodel.h"

ViewModel::ViewModel(QObject *parent) : QAbstractListModel(parent)
{
        m_pViewList = new QList<ViewItem*>;
}

ViewModel::~ViewModel()
{

}

void ViewModel::setViewList(QList<ViewItem*> *aList)
{
    beginResetModel();
    m_pViewList = aList;
    endResetModel();
    //    reset();
}
void ViewModel::AddView(ViewItem *aViewItem)
{
    int first = m_pViewList->count();
    int last = first;

    beginInsertRows(QModelIndex(), first, last);
    m_pViewList->append(aViewItem);
    endInsertRows();
}

QVariant ViewModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.row() >= m_pViewList->size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return QVariant(QString("%1").arg((m_pViewList->at(index.row()))->getViewName()));
    else
        return QVariant();
}
int ViewModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_pViewList->size();
}
