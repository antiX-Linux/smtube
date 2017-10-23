/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabs;
    QWidget *general_tab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *playback_group;
    QHBoxLayout *horizontalLayout;
    QLabel *playback_quality_label;
    QComboBox *playback_quality_combo;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *download_group;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *add_download_check;
    QComboBox *external_download_combo;
    QSpacerItem *verticalSpacer_3;
    QWidget *players_tab;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *table;
    QVBoxLayout *verticalLayout_2;
    QPushButton *up_button;
    QPushButton *down_button;
    QSpacerItem *verticalSpacer_2;
    QPushButton *add_button;
    QPushButton *delete_button;
    QSpacerItem *verticalSpacer;
    QPushButton *edit_button;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addplayers_button;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;
    QWidget *interface_tab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *style_label;
    QComboBox *style_combo;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *_2;
    QLabel *label_2;
    QLineEdit *default_font_edit;
    QPushButton *change_font_button;
    QSpacerItem *verticalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QStringLiteral("ConfigDialog"));
        ConfigDialog->resize(627, 373);
        verticalLayout = new QVBoxLayout(ConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabs = new QTabWidget(ConfigDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setTabPosition(QTabWidget::North);
        general_tab = new QWidget();
        general_tab->setObjectName(QStringLiteral("general_tab"));
        verticalLayout_3 = new QVBoxLayout(general_tab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        playback_group = new QGroupBox(general_tab);
        playback_group->setObjectName(QStringLiteral("playback_group"));
        horizontalLayout = new QHBoxLayout(playback_group);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        playback_quality_label = new QLabel(playback_group);
        playback_quality_label->setObjectName(QStringLiteral("playback_quality_label"));

        horizontalLayout->addWidget(playback_quality_label);

        playback_quality_combo = new QComboBox(playback_group);
        playback_quality_combo->setObjectName(QStringLiteral("playback_quality_combo"));

        horizontalLayout->addWidget(playback_quality_combo);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout_3->addWidget(playback_group);

        download_group = new QGroupBox(general_tab);
        download_group->setObjectName(QStringLiteral("download_group"));
        verticalLayout_5 = new QVBoxLayout(download_group);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        add_download_check = new QCheckBox(download_group);
        add_download_check->setObjectName(QStringLiteral("add_download_check"));

        verticalLayout_5->addWidget(add_download_check);

        external_download_combo = new QComboBox(download_group);
        external_download_combo->setObjectName(QStringLiteral("external_download_combo"));
        external_download_combo->setEnabled(false);
        external_download_combo->setEditable(true);

        verticalLayout_5->addWidget(external_download_combo);


        verticalLayout_3->addWidget(download_group);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabs->addTab(general_tab, QString());
        players_tab = new QWidget();
        players_tab->setObjectName(QStringLiteral("players_tab"));
        verticalLayout_6 = new QVBoxLayout(players_tab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        table = new QListWidget(players_tab);
        table->setObjectName(QStringLiteral("table"));

        horizontalLayout_3->addWidget(table);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        up_button = new QPushButton(players_tab);
        up_button->setObjectName(QStringLiteral("up_button"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/arrow-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        up_button->setIcon(icon);

        verticalLayout_2->addWidget(up_button);

        down_button = new QPushButton(players_tab);
        down_button->setObjectName(QStringLiteral("down_button"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        down_button->setIcon(icon1);

        verticalLayout_2->addWidget(down_button);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        add_button = new QPushButton(players_tab);
        add_button->setObjectName(QStringLiteral("add_button"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_button->setIcon(icon2);

        verticalLayout_2->addWidget(add_button);

        delete_button = new QPushButton(players_tab);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_button->setIcon(icon3);

        verticalLayout_2->addWidget(delete_button);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        edit_button = new QPushButton(players_tab);
        edit_button->setObjectName(QStringLiteral("edit_button"));

        verticalLayout_2->addWidget(edit_button);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addplayers_button = new QPushButton(players_tab);
        addplayers_button->setObjectName(QStringLiteral("addplayers_button"));

        horizontalLayout_2->addWidget(addplayers_button);

        horizontalSpacer = new QSpacerItem(348, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        tabs->addTab(players_tab, QString());
        interface_tab = new QWidget();
        interface_tab->setObjectName(QStringLiteral("interface_tab"));
        verticalLayout_4 = new QVBoxLayout(interface_tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        style_label = new QLabel(interface_tab);
        style_label->setObjectName(QStringLiteral("style_label"));

        horizontalLayout_4->addWidget(style_label);

        style_combo = new QComboBox(interface_tab);
        style_combo->setObjectName(QStringLiteral("style_combo"));

        horizontalLayout_4->addWidget(style_combo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        _2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
        _2->setContentsMargins(0, 0, 0, 0);
        _2->setObjectName(QStringLiteral("_2"));
        label_2 = new QLabel(interface_tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        _2->addWidget(label_2);

        default_font_edit = new QLineEdit(interface_tab);
        default_font_edit->setObjectName(QStringLiteral("default_font_edit"));
        default_font_edit->setReadOnly(true);

        _2->addWidget(default_font_edit);

        change_font_button = new QPushButton(interface_tab);
        change_font_button->setObjectName(QStringLiteral("change_font_button"));

        _2->addWidget(change_font_button);


        verticalLayout_4->addLayout(_2);

        verticalSpacer_5 = new QSpacerItem(20, 233, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        tabs->addTab(interface_tab, QString());

        verticalLayout->addWidget(tabs);

        buttonBox = new QDialogButtonBox(ConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        playback_quality_label->setBuddy(playback_quality_combo);
        style_label->setBuddy(style_combo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabs, playback_quality_combo);
        QWidget::setTabOrder(playback_quality_combo, add_download_check);
        QWidget::setTabOrder(add_download_check, external_download_combo);
        QWidget::setTabOrder(external_download_combo, buttonBox);
        QWidget::setTabOrder(buttonBox, table);
        QWidget::setTabOrder(table, up_button);
        QWidget::setTabOrder(up_button, down_button);
        QWidget::setTabOrder(down_button, add_button);
        QWidget::setTabOrder(add_button, delete_button);
        QWidget::setTabOrder(delete_button, edit_button);
        QWidget::setTabOrder(edit_button, addplayers_button);
        QWidget::setTabOrder(addplayers_button, style_combo);
        QWidget::setTabOrder(style_combo, default_font_edit);
        QWidget::setTabOrder(default_font_edit, change_font_button);

        retranslateUi(ConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigDialog, SLOT(reject()));
        QObject::connect(add_download_check, SIGNAL(toggled(bool)), external_download_combo, SLOT(setEnabled(bool)));

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QApplication::translate("ConfigDialog", "Settings", Q_NULLPTR));
        playback_group->setTitle(QApplication::translate("ConfigDialog", "Playback", Q_NULLPTR));
        playback_quality_label->setText(QApplication::translate("ConfigDialog", "Preferred &quality:", Q_NULLPTR));
        download_group->setTitle(QApplication::translate("ConfigDialog", "Download", Q_NULLPTR));
        add_download_check->setText(QApplication::translate("ConfigDialog", "Download videos using an &external service", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(general_tab), QApplication::translate("ConfigDialog", "&General", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        up_button->setToolTip(QApplication::translate("ConfigDialog", "Up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        down_button->setToolTip(QApplication::translate("ConfigDialog", "Down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        add_button->setToolTip(QApplication::translate("ConfigDialog", "Add", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        delete_button->setToolTip(QApplication::translate("ConfigDialog", "Delete", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        edit_button->setText(QApplication::translate("ConfigDialog", "Edit", Q_NULLPTR));
        addplayers_button->setText(QApplication::translate("ConfigDialog", "A&dd predefined players", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(players_tab), QApplication::translate("ConfigDialog", "&Players", Q_NULLPTR));
        style_label->setText(QApplication::translate("ConfigDialog", "&Style:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConfigDialog", "Font:", Q_NULLPTR));
        change_font_button->setText(QApplication::translate("ConfigDialog", "C&hange...", Q_NULLPTR));
        tabs->setTabText(tabs->indexOf(interface_tab), QApplication::translate("ConfigDialog", "&Interface", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
