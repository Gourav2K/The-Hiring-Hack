# Generated by Django 3.2.11 on 2022-01-30 13:30

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('home', '0006_auto_20220130_1708'),
    ]

    operations = [
        migrations.AddField(
            model_name='application',
            name='status',
            field=models.CharField(default='Applied', max_length=30),
            preserve_default=False,
        ),
    ]
