__int64 __fastcall sub_16B60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 idati; // rbp
  __int64 v5; // rax
  unsigned int tinfo; // ebx
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int16 v12; // [rsp+30h] [rbp-28h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  idati = a2;
  v5 = *a1;
  v13 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  tinfo = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v5 + 408))(a1, &v8, a4);
  if ( (_BYTE)tinfo )
  {
    tinfo = 0;
    if ( !v8 )
      return tinfo;
    v11 = v8;
    v12 = 256;
    if ( !a2 )
      idati = get_idati();
    v10 = idati;
    tinfo = create_tinfo();
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return tinfo;
}
