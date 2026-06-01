__int64 __fastcall sub_59C60(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  int v6; // ebx
  char v7; // al
  unsigned int v8; // ebp
  __int64 v9; // rax
  int v10; // ebp
  int v11; // esi
  _DWORD *v12; // r14
  unsigned __int64 tinfo_size; // rax
  unsigned __int64 v14; // r15
  char tinfo_property; // al
  __int64 result; // rax
  char v17; // al
  int v18; // r15d
  int v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+14h] [rbp-44h]

  v6 = a2;
  v7 = *(_BYTE *)(a1 + 88);
  v8 = v7 & 0xF0;
  if ( (v7 & 0xF0) == 0xC0 )
    v8 = *(_DWORD *)(a1 + 28);
  if ( v8 <= 0x10 )
    v8 = getinf();
  if ( !(unsigned __int8)getinf_flag() )
    goto LABEL_8;
  if ( v8 == 80 || (v17 = getinf() & 0xF, v17 == 1) )
  {
    v20 = 32;
    goto LABEL_9;
  }
  if ( v17 )
LABEL_8:
    v20 = 0;
  else
    v20 = 32 * ((unsigned int)getinf() == 11);
LABEL_9:
  v9 = a2;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a1 + 8) )
  {
    v10 = 0;
    v21 = a2 + 64;
    do
    {
      v12 = (_DWORD *)(*(_QWORD *)a1 + 80 * v9);
      tinfo_size = get_tinfo_size();
      v14 = tinfo_size;
      if ( tinfo_size == -1 )
        return 0;
      if ( tinfo_size > 8 || (tinfo_size & (tinfo_size - 1)) != 0 )
      {
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
          return 0;
        if ( a4 > v10 )
        {
          if ( v14 > 8 )
            return 0;
LABEL_12:
          v11 = v21 + v10;
          if ( (get_tinfo_property() & 0xF) != 9 )
            v11 = *(_DWORD *)(a3 + 4LL * v10);
          v12[2] = v11;
          ++v10;
          *v12 = 3;
          if ( !v20 )
            goto LABEL_16;
          goto LABEL_15;
        }
      }
      else if ( a4 > v10 )
      {
        goto LABEL_12;
      }
      *v12 = 1;
      *((_QWORD *)v12 + 1) = a5;
LABEL_15:
      a5 += (v14 + 7) & 0xFFFFFFF8;
LABEL_16:
      v9 = ++v6;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 8) );
  }
  v18 = v20;
  result = 1;
  if ( v20 < a5 )
    v18 = a5;
  *(_QWORD *)(a1 + 56) = v18;
  return result;
}

