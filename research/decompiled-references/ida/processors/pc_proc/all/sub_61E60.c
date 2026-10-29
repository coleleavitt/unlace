__int64 __fastcall sub_61E60(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char tinfo_property; // al
  char v9; // r12
  __int64 tinfo_size; // r8
  int v11; // ebp
  int v12; // edx
  int v13; // r9d
  int v14; // eax
  int v15; // r8d
  int v16; // r10d
  int v17; // r8d
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r14d
  char v22; // al
  __int64 v23; // rdx
  int v24; // r10d
  _BYTE *v25; // rcx
  unsigned int v26; // esi
  char v27; // al
  unsigned __int8 *v28; // rcx
  int v29; // r11d
  int v30; // r9d
  char v31; // al
  int v32; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // eax
  int v37; // r12d
  _BYTE *v38; // rax
  __int64 v39; // rsi
  int v40; // r11d
  __int64 v41; // rax
  char *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // [rsp+0h] [rbp-68h]
  __int64 v47; // [rsp+0h] [rbp-68h]
  unsigned __int64 v48; // [rsp+8h] [rbp-60h]
  int v49; // [rsp+8h] [rbp-60h]
  int v50; // [rsp+14h] [rbp-54h]
  int v51; // [rsp+20h] [rbp-48h]
  int v52; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  if ( !tinfo_property )
    return 1;
  v9 = tinfo_property;
  tinfo_size = get_tinfo_size();
  v11 = tinfo_size;
  if ( (_DWORD)tinfo_size == -1 )
    return 1;
  v12 = *(_DWORD *)(a1 + 32);
  v13 = a3 + *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v13;
  if ( v12 || (v9 & 0x2F) == 0xD )
    goto LABEL_6;
  if ( (v13 & (v51 - 1)) != 0 )
    return 1;
  if ( !*(_BYTE *)(a1 + 60) )
  {
    v36 = 8 - v13 % 8;
    if ( !(_DWORD)tinfo_size )
    {
      HIBYTE(v52) = 0;
      *(_WORD *)((char *)&v52 + 1) = 0;
      goto LABEL_8;
    }
    v37 = tinfo_size;
    do
    {
      v39 = *(_QWORD *)(a1 + 8);
      if ( v37 <= v36 )
        v36 = v37;
      v40 = v36;
      v41 = *(_QWORD *)(a1 + 16);
      if ( v41 && (v42 = (char *)(v39 + 2 * v41 - 2), *v42 == v13) )
      {
        if ( v40 > v42[1] )
          v42[1] = v40;
      }
      else
      {
        v43 = v41 + 1;
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v41 + 1) )
        {
          v50 = v13;
          v49 = v40;
          v47 = tinfo_size;
          v44 = qvector_reserve();
          v13 = v50;
          v40 = v49;
          *(_QWORD *)(a1 + 8) = v44;
          v39 = v44;
          v41 = *(_QWORD *)(a1 + 16);
          tinfo_size = v47;
          v43 = v41 + 1;
        }
        v38 = (_BYTE *)(v39 + 2 * v41);
        *(_QWORD *)(a1 + 16) = v43;
        *v38 = v13;
        v38[1] = v40;
      }
      v13 += v40;
      v36 = 8;
      v37 -= v40;
    }
    while ( v37 );
  }
LABEL_6:
  v52 = 0;
  if ( (unsigned __int64)((int)tinfo_size - 1LL) > 0x1F )
    goto LABEL_7;
  v46 = tinfo_size;
  v48 = (int)tinfo_size;
  v31 = sub_5FD00(a1, (char *)&v52, a4, (int)tinfo_size);
  LODWORD(tinfo_size) = v46;
  if ( v31 )
  {
    v13 = *(_DWORD *)(a1 + 40);
LABEL_9:
    v14 = a3 % 8 + tinfo_size + 7;
    v15 = a3 + 7;
    v16 = v14 / 8;
    if ( a3 >= 0 )
      v15 = a3;
    v17 = v15 >> 3;
    if ( v14 <= 7 )
      goto LABEL_22;
    goto LABEL_12;
  }
  v32 = sub_5F9B0(a1);
  LODWORD(tinfo_size) = v46;
  if ( v32 == 1 )
  {
LABEL_7:
    v13 = *(_DWORD *)(a1 + 40);
LABEL_8:
    LOBYTE(v52) = 7;
    goto LABEL_9;
  }
  if ( !v32 )
  {
    v33 = 0;
    v34 = (v48 + 7) >> 3;
    do
    {
      if ( *((_BYTE *)&v52 + v33) == 7 )
        goto LABEL_7;
      ++v33;
    }
    while ( (unsigned int)v33 < (unsigned int)((v48 + 7) >> 3) );
    v13 = *(_DWORD *)(a1 + 40);
    if ( v48 <= 0x10 )
    {
      if ( v34 != 2 )
        goto LABEL_9;
    }
    else if ( (_BYTE)v52 != 3 || *(_WORD *)((char *)&v52 + 1) != 1028 || HIBYTE(v52) != 4 )
    {
      LOBYTE(v52) = 7;
      v45 = a3 + 7;
      v16 = (a3 % 8 + v46 + 7) >> 3;
      if ( a3 >= 0 )
        v45 = a3;
      v17 = v45 >> 3;
LABEL_12:
      v18 = v17 + 1;
      v19 = 0;
      v20 = a2 + v17;
      v21 = v16 - 1;
      do
      {
        v26 = *((unsigned __int8 *)&v52 + v19);
        v27 = sub_59710(*(unsigned __int8 *)(v20 + v19), v26);
        *(_BYTE *)(v20 + v23) = v27;
        if ( v30 )
        {
          if ( v21 > (int)v23 || v11 + v29 > 8 )
          {
            if ( v18 + (int)v23 > 3 )
            {
              if ( !under_debugger )
                interr();
              BUG();
            }
            v22 = sub_59710(*v28, v26);
            *v25 = v22;
          }
          v11 -= 8;
        }
        v19 = v23 + 1;
      }
      while ( v24 > (int)v19 );
      v13 = *(_DWORD *)(a1 + 40);
LABEL_22:
      *(_DWORD *)(a1 + 40) = v13 - a3;
      return 0;
    }
    v35 = 0;
    do
    {
      if ( *((_BYTE *)&v52 + v35 + 1) == 4 && (unsigned __int8)(*((_BYTE *)&v52 + (int)v35) - 2) > 2u )
        *((_BYTE *)&v52 + v35 + 1) = 2;
      ++v35;
    }
    while ( v35 != (_DWORD)v34 - 1 );
    goto LABEL_9;
  }
  return 2;
}

