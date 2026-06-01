__int64 __fastcall sub_B100(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // r14
  __int64 i; // rax
  unsigned int v6; // ebx
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // esi
  unsigned int v14; // edx
  __int64 v15; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-1F0h]
  __int64 v17; // [rsp+10h] [rbp-1E8h]
  __int128 v18; // [rsp+18h] [rbp-1E0h]
  __int64 v19; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v20; // [rsp+38h] [rbp-1C0h]
  __int128 v21; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-198h]
  __int64 v23; // [rsp+68h] [rbp-190h]
  __int64 v24; // [rsp+70h] [rbp-188h]
  _BYTE v25[320]; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int64 v26; // [rsp+1B8h] [rbp-40h] BYREF

  v26 = __readfsqword(0x28u);
  v21 = -1;
  v22 = -1;
  v3 = (unsigned __int64 *)v25;
  v23 = 0;
  v24 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( &v26 != v3 );
  if ( (int)decode_insn() <= 0 )
    return (unsigned int)-1;
  v4 = a2[1];
  v17 = 0;
  v18 = 0;
  if ( !(_DWORD)v4 )
    goto LABEL_5;
  v17 = qvector_reserve();
  memset((void *)(v17 + 4 * v18), 0, 4 * ((int)v4 - (_QWORD)v18));
  *(_QWORD *)&v18 = (int)v4;
  if ( (int)v4 <= 0 )
    goto LABEL_5;
  v10 = (unsigned int)(v4 - 1);
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = *(unsigned __int16 *)(*a2 + v12 + 8);
    v12 += 80;
    *(_DWORD *)(v17 + v11) = v13;
    v11 += 4;
  }
  while ( v11 != 4 * v10 + 4 );
  if ( (_WORD)v23 == 11 || (_WORD)v23 == 134 )
  {
    for ( i = 0; ; ++i )
    {
      v14 = *(_DWORD *)(v17 + 4 * i);
      if ( v14 > 0x16 && v14 != 27 )
        break;
      if ( i == v10 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LODWORD(i) = get_spoiled_reg();
  }
  v6 = i;
  if ( (int)i >= 0 )
  {
    v15 = 0;
    v8 = 80LL * (int)i;
    copy_tinfo_t();
    v9 = *(_QWORD *)(*a2 + v8 + 16);
    v16 = v9;
    if ( (unsigned __int16)v23 > 0x39u )
    {
      if ( (unsigned __int16)(v23 - 140) <= 1u )
      {
LABEL_17:
        v20 = 0;
        v19 = 0;
        sub_9940((__int64)&v21, (__int64)v25, (__int64)&v15, v9, (__int64)&v19);
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree();
        }
        goto LABEL_15;
      }
    }
    else if ( (unsigned __int16)v23 > 0x19u )
    {
      switch ( (__int16)v23 )
      {
        case 26:
        case 27:
        case 28:
        case 29:
        case 32:
        case 33:
          goto LABEL_15;
        case 54:
        case 57:
          goto LABEL_17;
        case 55:
          remove_tinfo_pointer();
          v9 = v16;
          goto LABEL_17;
        default:
          goto LABEL_14;
      }
      goto LABEL_15;
    }
LABEL_14:
    v6 |= 0x80000000;
LABEL_15:
    clear_tinfo_t();
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v6;
}

