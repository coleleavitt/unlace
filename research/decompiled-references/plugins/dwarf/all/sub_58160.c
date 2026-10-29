__int64 __fastcall sub_58160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 idati; // rax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  idati = *(_QWORD *)(a1 + 8);
  v12 = __readfsqword(0x28u);
  v11 = 257;
  v9 = 0;
  v10[1] = (unsigned int)a2;
  if ( !idati )
    idati = get_idati(a1, a2, 257, a4, a5, a6);
  v10[0] = idati;
  v7 = create_tinfo(&v9, 61, 189, v10);
  if ( (_BYTE)v7 )
    v7 = sub_57FF0(a1, &v9);
  clear_tinfo_t(&v9);
  return v7;
}
