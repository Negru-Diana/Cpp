#pragma once
#include<vector>
#include<string>
#include"domain.h"
using std::vector;
using std::string;

//Exceptii pentru Repo
class RepoException
{
	string msg;

public:
	RepoException(string msg) :msg{ msg } {}

	string get_message();
};


//Repo pentru Film
class FilmRepo
{
private:
	vector<Film> filme;

public:

	FilmRepo() = default;
	FilmRepo(const FilmRepo& ot) = delete;

	//Adaug film in repo
	virtual void store(const Film& film);

	//Sterg film din repo
	virtual void sterge(string titlu, string gen);

	//Modific film din repo
	virtual void modifica(string titlu, string gen, const Film& film);

	//Returnez lista de filme din repo
	virtual const vector<Film>& getAll() noexcept;

};


//Repo pentru Cos
class CosRepo
{
private:
	vector<Film> cos;
	FilmRepo& rep;

public:

	CosRepo(FilmRepo& rep) noexcept : rep{ rep } {}

	CosRepo(const CosRepo& ot) = delete;
	CosRepo() noexcept = default;

	//Adaug un film in cos
	void add(string titlu, string gen);

	//Sterg filmele din cos
	void del();

	//Genereaza cosul cu un numar dat de filme, aleatoriu
	vector<Film> genereaza(int numar);

	//Returneaza toate filmele din cosRepo
	const vector<Film>& getAllCosRepo() noexcept;

};
