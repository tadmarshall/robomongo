#include "robomongo/gui/widgets/explorer/ExplorerDatabaseCategoryTreeItem.h"

#include "robomongo/gui/widgets/explorer/ExplorerDatabaseTreeItem.h"

using namespace Robomongo;

ExplorerDatabaseCategoryTreeItem::ExplorerDatabaseCategoryTreeItem(ExplorerDatabaseCategory category,
                                                                   ExplorerDatabaseTreeItem *databaseItem) :
    QObject(),
    _category(category),
    _databaseItem(databaseItem) {}
