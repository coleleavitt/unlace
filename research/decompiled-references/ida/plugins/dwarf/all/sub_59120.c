__int64 __fastcall sub_59120(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 idati; // rax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v6 = *(unsigned int *)(a2 + 8);
  idati = *(_QWORD *)a2;
  v13 = __readfsqword(0x28u);
  v12 = 257;
  v10 = 0;
  v11[1] = (unsigned int)v6;
  if ( !idati )
    idati = get_idati(a1, a2, v6, 257, a5, a6);
  v11[0] = idati;
  v8 = create_tinfo(&v10, 61, 189, v11);
  if ( (_BYTE)v8 )
  {
    set_tinfo_property(&v10, 6, 192);
    LOBYTE(v8) = (unsigned int)lexcompare_tinfo(*a1, v10, 0) == 0;
  }
  clear_tinfo_t(&v10);
  return v8;
}

