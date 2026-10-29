__int64 __fastcall sub_72130(__int64 a1, __int64 a2, int *a3, int a4)
{
  int *v4; // r8
  int v5; // eax
  int *v7; // r15
  unsigned int v8; // eax
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r13d
  _DWORD *v19; // r9
  unsigned __int16 *i; // rbx
  __int64 v21; // rdx
  int v22; // r15d
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // r10
  int v26; // r11d
  int v27; // r12d
  int v28; // [rsp+8h] [rbp-60h]

  v4 = a3;
  v5 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned __int16)v5 > 0x8Au )
  {
    if ( (_WORD)v5 == 214 && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 86) == *(_WORD *)(a2 + 46) )
      return (unsigned int)-1;
  }
  else
  {
    if ( (unsigned __int16)v5 > 0x86u )
      return (unsigned int)-2;
    if ( (unsigned __int16)v5 > 0x12u )
    {
      if ( (_WORD)v5 == 46 )
      {
        v21 = *(_QWORD *)(a2 + 48);
        if ( v21 == 128 || v21 == 33 )
        {
LABEL_5:
          v28 = 0;
          v7 = v4;
          if ( a4 > 0 )
          {
            while ( 1 )
            {
              v8 = sub_71FC0(*v7, 1);
              v9 = v8;
              if ( v8 > 0xF || (v10 = 61672, !_bittest64(&v10, v9)) )
              {
                if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0 )
                  break;
                v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
                v13 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
                if ( v12 != v13 )
                {
                  v14 = v13 & v12;
                  if ( v13 != -1 )
                    v13 = v14;
                }
                if ( get_ea_name() <= 0 || !sub_691E0(v13, 0) || (v9 & 0xFFFFFFFB) != 0 )
                  break;
              }
              ++v28;
              ++v7;
              if ( a4 == v28 )
                return (unsigned int)-1;
            }
          }
          if ( a4 != v28 )
            return (unsigned int)-2;
          return (unsigned int)-1;
        }
      }
    }
    else if ( (unsigned __int16)v5 > 0xFu )
    {
      goto LABEL_5;
    }
  }
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_DWORD *)(v16 + 104);
  if ( v5 < v17 )
    return (unsigned int)-1;
  if ( v5 >= *(_DWORD *)(v16 + 108) )
    return (unsigned int)-1;
  v18 = *(_DWORD *)(*(_QWORD *)(v16 + 112) + 16LL * (v5 - v17) + 8);
  if ( !v18 )
    return (unsigned int)-1;
  v19 = dword_95840;
  for ( i = (unsigned __int16 *)(a2 + 46); (*v19 & v18) == 0 || *((_BYTE *)i - 5) != 1 || a4 <= 0; i += 20 )
  {
LABEL_28:
    if ( ++v19 == &dword_95840[5] )
      return (unsigned int)-1;
  }
  v22 = *i;
  v23 = 0;
  while ( 1 )
  {
    v27 = v4[v23];
    v11 = v23;
    if ( v27 == v22 )
      return v11;
    sub_71FC0(v22, 1);
    v24 = sub_71FC0(v27, 1);
    if ( v26 == v24 && ((unsigned int)(v26 - 133) <= 0x1F || v22 == v26 || v27 == v26) )
      return v11;
    v23 = v25 + 1;
    if ( a4 == v23 )
      goto LABEL_28;
  }
}
