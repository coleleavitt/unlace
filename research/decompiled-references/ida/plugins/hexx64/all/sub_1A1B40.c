__int64 *__fastcall sub_1A1B40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v10; // rdx
  int tinfo_size; // eax
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // edx
  __int64 v16; // [rsp+8h] [rbp-88h]
  __int64 v17; // [rsp+10h] [rbp-80h]
  __int64 v20; // [rsp+38h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-50h] BYREF
  char v22; // [rsp+48h] [rbp-48h]
  unsigned __int64 v23; // [rsp+58h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a3 + 40) != *(_DWORD *)(v10 + 24) && *(_DWORD *)(a3 + 64) == *(_DWORD *)(v10 + 48) )
    v16 = a1 + 424;
  else
    v16 = a1 + 400;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size <= 0 || (v17 = tinfo_size, (a6 - a4) % tinfo_size) )
  {
    if ( !under_debugger )
      sub_383060(0xCB48u, a7);
    goto LABEL_19;
  }
  if ( a6 > a4 )
  {
    while ( 1 )
    {
      if ( a5 > a4 )
      {
        v20 = 1;
      }
      else
      {
        v20 = 0;
        copy_tinfo_t();
      }
      v12 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3 )
        break;
      v13 = sub_1A15A0(a3, 0, a7);
      v14 = *(_DWORD *)(a3 + 8) & 0x20;
      v21 = *(_QWORD *)(a3 + 72);
      v22 = v14 == 0 ? 5 : 1;
      a2 = sub_19AC70(v12, (__int64)a2, &v21, -1, v13, 0xFFFFFFFF, a4, (__int64)&v20, v16, 1);
      clear_tinfo_t();
      a4 += v17;
      if ( a6 <= a4 )
        return a2;
    }
    if ( !under_debugger )
      sub_383060(0xC8ABu, a7);
LABEL_19:
    BUG();
  }
  return a2;
}

