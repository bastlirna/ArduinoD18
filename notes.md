# Poznámky

## Abstract

*Víte, jak to udělat aby vaše Arduino zvládalo víc úkolů najednou? Víte co pro vás vlastně dělá operační systém na „velkém“ počítači? Co je kooperativní a preemptivní multitasking? Co je asynchronní programování? Co je programování řízené událostmi? Co stavový automat? Co je koprogram? Co je aktivní čekání? A čemu se vyhnout a nepřijít o rozum – https://i.imgflip.com/28lleu.jpg? Otázky, samé otázky…*

*Všechno vám určitě říct nestihneme, ale zkusíme vás nasměrovat tak, abyste dokázali ze svého Arduina vymáčknout co nejvíc. Nebudou chybět ani ukázky problémů, na které je i delay krátký.*


## Témata

- Příklady
    - většina toho co si budeme povídat by si zasloužila pěkný (adekvátně složitý) příklad, to by se nevešlo do jedné hodiny
        - Domácí alarm
        - Výjední automat 
        - Mikrovlná trouba
        - ...
        - Tzn. zařízení které musí na pozadí kontrolovat mnoho vstupů, musí konmunikovat s uživatelem (LED, LCD, tlačítka), mají mnoho stavů a musí korektně reagovat i na předvídatelné/nepředvídatelné chyby (co se stane, kdy se rozbije spínač, který hlídá otevřené dveře mikrovlné trouby, ...)
    - takže většina příkladů bude poměrně umělých :(
- Neblokující čekání
    - Delay je zlo
    - Používáme millis
    - Píšeme si vlastní "knihovnu"
- Stavový automat
    - Příklad s switch/case
    - Příklad s ukazatelem na fci.
    - Píšeme si vlastní "knihovnu"
- Asynchronní programování
- Event base programování
    - Příklad je SDK BC
- Odkaz na nějaké knihovny, které stojí za pozornost


## Odkazy




