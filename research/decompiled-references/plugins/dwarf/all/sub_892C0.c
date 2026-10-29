__int64 __fastcall sub_892C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r12
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int16 v14; // dx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r12d
  __int16 v18; // r8
  __int16 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 i; // rbx
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  __int16 v34; // [rsp+20h] [rbp-B0h]
  __int16 v35; // [rsp+28h] [rbp-A8h]
  __int16 v36; // [rsp+2Eh] [rbp-A2h]
  __int64 *v37; // [rsp+58h] [rbp-78h]
  char v38[8]; // [rsp+68h] [rbp-68h] BYREF
  __int128 v39; // [rsp+70h] [rbp-60h] BYREF
  __int128 v40; // [rsp+80h] [rbp-50h] BYREF
  _QWORD v41[8]; // [rsp+90h] [rbp-40h] BYREF

  v41[1] = __readfsqword(0x28u);
  v6 = qalloc_or_throw(24);
  *(_QWORD *)v6 = 0;
  *(_OWORD *)(v6 + 8) = 0;
  v37 = (__int64 *)v6;
  if ( *(_QWORD *)(a4 + 32) )
  {
    v7 = 0;
    v8 = 0;
    v36 = 0;
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      v13 = *(_QWORD *)(a4 + 40);
      v41[0] = 0;
      v39 = 0;
      v40 = 0;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *, __int128 *, char *, __int128 *, char *, char *))(v12 + 128))(
             v13,
             v7,
             v41,
             &v39,
             (char *)&v39 + 8,
             &v40,
             (char *)&v40 + 8,
             v38) )
      {
        break;
      }
      if ( LOBYTE(v41[0]) == 0x93 )
      {
        v14 = v39;
        if ( v8 )
          *(_WORD *)(*v37 + 24 * v37[1] - 6) = v39;
        v36 += v14;
        v8 = 0;
        if ( (unsigned __int64)++v7 >= *(_QWORD *)(a4 + 32) )
          goto LABEL_15;
      }
      else
      {
        if ( LOBYTE(v41[0]) == 0x9D )
        {
          if ( (((unsigned __int8)v39 | BYTE8(v39)) & 7) != 0 )
            break;
          v18 = (unsigned __int16)v39 >> 3;
          v19 = WORD4(v39) >> 3;
          if ( v8 )
          {
            v21 = v37[1];
            v22 = *v37;
            if ( v37[2] < (unsigned __int64)(v21 + 1) )
            {
              v35 = WORD4(v39) >> 3;
              v34 = (unsigned __int16)v39 >> 3;
              v29 = qvector_reserve(v37, v22, v21 + 1, 24);
              *v37 = v29;
              v22 = v29;
              v19 = v35;
              v21 = v37[1];
              v18 = v34;
            }
            v23 = v22 + 24 * v21;
            *(_DWORD *)(v23 + 16) = 0xFFFF;
            *(_QWORD *)v23 = 0;
            *(_QWORD *)(v23 + 8) = 0;
            ++v37[1];
            *(_WORD *)(v23 + 18) = v18;
            *(_WORD *)(v23 + 16) += v19;
          }
          v8 = 0;
          v36 += v19 + v18;
        }
        else
        {
          if ( v8 )
            break;
          v9 = v37[1];
          v10 = *v37;
          if ( v37[2] < (unsigned __int64)(v9 + 1) )
          {
            v20 = qvector_reserve(v37, v10, v9 + 1, 24);
            *v37 = v20;
            v9 = v37[1];
            v10 = v20;
          }
          v11 = v10 + 24 * v9;
          *(_QWORD *)v11 = 0;
          *(_DWORD *)(v11 + 16) = 0xFFFF;
          *(_QWORD *)(v11 + 8) = 0;
          ++v37[1];
          v8 = sub_891E0(a1, v11, a3, (__int64)&v39);
          if ( !v8 )
            break;
          *(_WORD *)(v11 + 16) = v36;
          *(_WORD *)(v11 + 18) = 0;
        }
        if ( (unsigned __int64)++v7 >= *(_QWORD *)(a4 + 32) )
        {
LABEL_15:
          if ( v8 )
            break;
          v15 = v37[1];
          if ( !v15 )
            break;
          if ( v15 == 1 )
          {
            v16 = *v37;
            if ( !*(_WORD *)(*v37 + 16) )
            {
              v17 = 1;
              v30 = *(_QWORD *)(a2 + 8);
              *(_QWORD *)(a2 + 8) = *(_QWORD *)(v16 + 8);
              v31 = *(_DWORD *)v16;
              *(_QWORD *)(v16 + 8) = v30;
              LODWORD(v30) = *(_DWORD *)a2;
              *(_DWORD *)a2 = v31;
              *(_DWORD *)v16 = v30;
              goto LABEL_29;
            }
          }
          cleanup_argloc(a2);
          if ( v37 )
          {
            *(_DWORD *)a2 = 2;
            *(_QWORD *)(a2 + 8) = v37;
          }
          return 1;
        }
      }
    }
  }
  v17 = 0;
LABEL_29:
  if ( v37 )
  {
    v24 = *v37;
    if ( *v37 )
    {
      v25 = v37[1];
      if ( v25 )
      {
        for ( i = 0; i != v25; ++i )
        {
          v27 = 3 * i;
          cleanup_argloc(v24 + 8 * v27);
          v24 = *v37;
        }
      }
      v37[1] = 0;
      qfree(v24);
    }
    qfree(v37);
  }
  return v17;
}
