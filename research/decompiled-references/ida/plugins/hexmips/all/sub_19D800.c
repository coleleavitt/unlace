__int64 *__fastcall sub_19D800(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  int tinfo_size; // eax
  __int64 v11; // r15
  int v12; // eax
  int v13; // edx
  __int64 v15; // [rsp+8h] [rbp-88h]
  __int64 v16; // [rsp+10h] [rbp-80h]
  __int64 v19; // [rsp+38h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-50h] BYREF
  char v21; // [rsp+48h] [rbp-48h]
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a3 + 40) != *(_DWORD *)(v9 + 24) && *(_DWORD *)(a3 + 64) == *(_DWORD *)(v9 + 48) )
    v15 = a1 + 424;
  else
    v15 = a1 + 400;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size <= 0 || (v16 = tinfo_size, (a6 - a4) % tinfo_size) )
  {
    if ( !under_debugger )
      sub_37E160(52040);
    goto LABEL_19;
  }
  if ( a6 > a4 )
  {
    while ( 1 )
    {
      if ( a5 > a4 )
      {
        v19 = 1;
      }
      else
      {
        v19 = 0;
        copy_tinfo_t();
      }
      v11 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3 )
        break;
      v12 = sub_19D260(a3, 0);
      v13 = *(_DWORD *)(a3 + 8) & 0x20;
      v20 = *(_QWORD *)(a3 + 72);
      v21 = v13 == 0 ? 5 : 1;
      a2 = sub_196930(v11, (__int64)a2, &v20, -1, v12, 0xFFFFFFFF, a4, (__int64)&v19, v15, 1);
      clear_tinfo_t();
      a4 += v16;
      if ( a6 <= a4 )
        return a2;
    }
    if ( !under_debugger )
      sub_37E160(51371);
LABEL_19:
    BUG();
  }
  return a2;
}

