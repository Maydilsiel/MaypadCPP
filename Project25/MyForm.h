#pragma once

namespace Project25 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ правкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ копироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вставитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вырезатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ вставкаТекущейВремениИДатыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ какИспользоватьБлокнотToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьТекстовыйФайлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ копироватьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ вставитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ вырезатьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^ вставкаДатыИВремяToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьТекстовыйФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->копироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вставитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вырезатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->вставкаТекущейВремениИДатыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->какИспользоватьБлокнотToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->копироватьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вставитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вырезатьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->вставкаДатыИВремяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->правкаToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(696, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->открытьТекстовыйФайлToolStripMenuItem,
					this->toolStripSeparator2, this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->toolStripSeparator3,
					this->выйтиToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьТекстовыйФайлToolStripMenuItem
			// 
			this->открытьТекстовыйФайлToolStripMenuItem->Name = L"открытьТекстовыйФайлToolStripMenuItem";
			this->открытьТекстовыйФайлToolStripMenuItem->Size = System::Drawing::Size(213, 22);
			this->открытьТекстовыйФайлToolStripMenuItem->Text = L"Открыть текстовый файл";
			this->открытьТекстовыйФайлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьТекстовыйФайлToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(210, 6);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(213, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(213, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(210, 6);
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(213, 22);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выйтиToolStripMenuItem_Click);
			// 
			// правкаToolStripMenuItem
			// 
			this->правкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->копироватьToolStripMenuItem,
					this->вставитьToolStripMenuItem, this->вырезатьToolStripMenuItem, this->удалитьToolStripMenuItem, this->toolStripSeparator1,
					this->вставкаТекущейВремениИДатыToolStripMenuItem
			});
			this->правкаToolStripMenuItem->Name = L"правкаToolStripMenuItem";
			this->правкаToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->правкаToolStripMenuItem->Text = L"Правка";
			// 
			// копироватьToolStripMenuItem
			// 
			this->копироватьToolStripMenuItem->Name = L"копироватьToolStripMenuItem";
			this->копироватьToolStripMenuItem->Size = System::Drawing::Size(256, 22);
			this->копироватьToolStripMenuItem->Text = L"Копировать";
			this->копироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::копироватьToolStripMenuItem_Click);
			// 
			// вставитьToolStripMenuItem
			// 
			this->вставитьToolStripMenuItem->Name = L"вставитьToolStripMenuItem";
			this->вставитьToolStripMenuItem->Size = System::Drawing::Size(256, 22);
			this->вставитьToolStripMenuItem->Text = L"Вставить";
			this->вставитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вставитьToolStripMenuItem_Click);
			// 
			// вырезатьToolStripMenuItem
			// 
			this->вырезатьToolStripMenuItem->Name = L"вырезатьToolStripMenuItem";
			this->вырезатьToolStripMenuItem->Size = System::Drawing::Size(256, 22);
			this->вырезатьToolStripMenuItem->Text = L"Вырезать";
			this->вырезатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вырезатьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(256, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(253, 6);
			// 
			// вставкаТекущейВремениИДатыToolStripMenuItem
			// 
			this->вставкаТекущейВремениИДатыToolStripMenuItem->Name = L"вставкаТекущейВремениИДатыToolStripMenuItem";
			this->вставкаТекущейВремениИДатыToolStripMenuItem->Size = System::Drawing::Size(256, 22);
			this->вставкаТекущейВремениИДатыToolStripMenuItem->Text = L"Вставка текущей времени и даты";
			this->вставкаТекущейВремениИДатыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вставкаТекущейВремениИДатыToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->какИспользоватьБлокнотToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// какИспользоватьБлокнотToolStripMenuItem
			// 
			this->какИспользоватьБлокнотToolStripMenuItem->Name = L"какИспользоватьБлокнотToolStripMenuItem";
			this->какИспользоватьБлокнотToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->какИспользоватьБлокнотToolStripMenuItem->Text = L"Как использовать блокнот\?";
			this->какИспользоватьБлокнотToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::какИспользоватьБлокнотToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 24);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(696, 346);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileName = L"*.txt";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"*.txt";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->копироватьToolStripMenuItem1,
					this->вставитьToolStripMenuItem1, this->вырезатьToolStripMenuItem1, this->удалитьToolStripMenuItem1, this->toolStripSeparator4,
					this->вставкаДатыИВремяToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(193, 120);
			// 
			// копироватьToolStripMenuItem1
			// 
			this->копироватьToolStripMenuItem1->Name = L"копироватьToolStripMenuItem1";
			this->копироватьToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->копироватьToolStripMenuItem1->Text = L"Копировать";
			this->копироватьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::копироватьToolStripMenuItem_Click);
			// 
			// вставитьToolStripMenuItem1
			// 
			this->вставитьToolStripMenuItem1->Name = L"вставитьToolStripMenuItem1";
			this->вставитьToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->вставитьToolStripMenuItem1->Text = L"Вставить";
			this->вставитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::вставитьToolStripMenuItem_Click);
			// 
			// вырезатьToolStripMenuItem1
			// 
			this->вырезатьToolStripMenuItem1->Name = L"вырезатьToolStripMenuItem1";
			this->вырезатьToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->вырезатьToolStripMenuItem1->Text = L"Вырезать";
			this->вырезатьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::вырезатьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem1
			// 
			this->удалитьToolStripMenuItem1->Name = L"удалитьToolStripMenuItem1";
			this->удалитьToolStripMenuItem1->Size = System::Drawing::Size(192, 22);
			this->удалитьToolStripMenuItem1->Text = L"Удалить";
			this->удалитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::удалитьToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(189, 6);
			// 
			// вставкаДатыИВремяToolStripMenuItem
			// 
			this->вставкаДатыИВремяToolStripMenuItem->Name = L"вставкаДатыИВремяToolStripMenuItem";
			this->вставкаДатыИВремяToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->вставкаДатыИВремяToolStripMenuItem->Text = L"Вставка даты и время";
			this->вставкаДатыИВремяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вставкаТекущейВремениИДатыToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 370);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Maypad";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void открытьТекстовыйФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		openFileDialog1->Title = "Открыть текстовый файл";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = openFileDialog1->FileName;

			try {
				richTextBox1->Text = System::IO::File::ReadAllText(filePath);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при открытии файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->Text->Length > 0) {
			saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			saveFileDialog1->Title = "Сохранить файл";

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				try {
					System::IO::File::WriteAllText(saveFileDialog1->FileName, richTextBox1->Text);
					MessageBox::Show("Файл успешно сохранен.", "Сохранение", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при сохранении файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}
	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
		saveFileDialog1->Title = "Сохранить как";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filePath = saveFileDialog1->FileName;

			try {
				System::IO::File::WriteAllText(filePath, richTextBox1->Text);
				MessageBox::Show("Файл успешно сохранен.", "Сохранение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при сохранении файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void копироватьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionLength > 0) {
		richTextBox1->Copy();
	}
}
private: System::Void вставитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Clipboard::ContainsText()) {
		richTextBox1->Paste();
	}
}
private: System::Void вырезатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionLength > 0) {
		richTextBox1->Cut();
	}
}
private: System::Void удалитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->SelectionLength > 0) {
		richTextBox1->SelectedText = "";
	}
}
private: System::Void вставкаТекущейВремениИДатыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentTime = DateTime::Now.ToString();
	richTextBox1->Text = richTextBox1->Text->Insert(richTextBox1->SelectionStart, currentTime);
}
private: System::Void какИспользоватьБлокнотToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ message = "Добро пожаловать в блокнот!\n\n";
	message += "Чтобы открыть текстовый файл, выберите пункт 'Файл' > 'Открыть текстовый файл'.\n";
	message += "Чтобы сохранить файл, выберите пункт 'Файл' > 'Сохранить'.\n";
	message += "Чтобы сохранить файл с другим именем, выберите пункт 'Файл' > 'Сохранить как'.\n";
	message += "Чтобы выйти из программы, выберите пункт 'Файл' > 'Выйти'.\n\n";
	message += "Для копирования, вставки, вырезания или удаления текста, используйте соответствующие пункты в меню 'Правка'.\n";
	message += "Чтобы вставить текущую дату и время в позицию курсора, выберите пункт 'Правка' > 'Вставка текущей времени и даты'.\n\n";
	message += "Приятного использования блокнота!";

	MessageBox::Show(message, "Инструкция по использованию блокнота", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ about = "Версия Maypad на С++ 1.0.0.0\n\n";
	about += "Данный блокнот созданн на языке программирования C++, чисто чтобы попробовать этот язык :)";

	MessageBox::Show(about, "О программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
};
