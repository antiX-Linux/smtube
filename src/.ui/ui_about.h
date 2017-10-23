/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *info_tab;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *logo;
    QSpacerItem *spacerItem;
    QTextBrowser *info;
    QWidget *translations_tab;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout2;
    QLabel *translators_icon;
    QSpacerItem *spacerItem1;
    QTextBrowser *translators;
    QWidget *license_tab;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout3;
    QLabel *license_icon;
    QSpacerItem *spacerItem2;
    QTextBrowser *license;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(518, 326);
        vboxLayout = new QVBoxLayout(About);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        tabWidget = new QTabWidget(About);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        info_tab = new QWidget();
        info_tab->setObjectName(QStringLiteral("info_tab"));
        hboxLayout = new QHBoxLayout(info_tab);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        logo = new QLabel(info_tab);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setText(QStringLiteral("icon"));

        vboxLayout1->addWidget(logo);

        spacerItem = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);

        info = new QTextBrowser(info_tab);
        info->setObjectName(QStringLiteral("info"));
        info->setFrameShape(QFrame::NoFrame);
        info->setFrameShadow(QFrame::Plain);
        info->setOpenExternalLinks(true);

        hboxLayout->addWidget(info);

        tabWidget->addTab(info_tab, QString());
        translations_tab = new QWidget();
        translations_tab->setObjectName(QStringLiteral("translations_tab"));
        hboxLayout1 = new QHBoxLayout(translations_tab);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        translators_icon = new QLabel(translations_tab);
        translators_icon->setObjectName(QStringLiteral("translators_icon"));
        translators_icon->setText(QStringLiteral("icon"));

        vboxLayout2->addWidget(translators_icon);

        spacerItem1 = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem1);


        hboxLayout1->addLayout(vboxLayout2);

        translators = new QTextBrowser(translations_tab);
        translators->setObjectName(QStringLiteral("translators"));
        translators->setFrameShape(QFrame::NoFrame);
        translators->setFrameShadow(QFrame::Plain);
        translators->setOpenExternalLinks(true);

        hboxLayout1->addWidget(translators);

        tabWidget->addTab(translations_tab, QString());
        license_tab = new QWidget();
        license_tab->setObjectName(QStringLiteral("license_tab"));
        hboxLayout2 = new QHBoxLayout(license_tab);
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        license_icon = new QLabel(license_tab);
        license_icon->setObjectName(QStringLiteral("license_icon"));
        license_icon->setText(QStringLiteral("icon"));

        vboxLayout3->addWidget(license_icon);

        spacerItem2 = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem2);


        hboxLayout2->addLayout(vboxLayout3);

        license = new QTextBrowser(license_tab);
        license->setObjectName(QStringLiteral("license"));
        license->setFrameShape(QFrame::NoFrame);
        license->setFrameShadow(QFrame::Plain);
        license->setOpenExternalLinks(true);

        hboxLayout2->addWidget(license);

        tabWidget->addTab(license_tab, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(About);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(tabWidget, info);
        QWidget::setTabOrder(info, buttonBox);
        QWidget::setTabOrder(buttonBox, translators);
        QWidget::setTabOrder(translators, license);

        retranslateUi(About);
        QObject::connect(buttonBox, SIGNAL(accepted()), About, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(info_tab), QApplication::translate("About", "&Info", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(translations_tab), QApplication::translate("About", "&Translators", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(license_tab), QApplication::translate("About", "&License", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
