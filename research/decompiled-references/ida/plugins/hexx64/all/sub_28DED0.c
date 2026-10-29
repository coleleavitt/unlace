__int64 __fastcall sub_28DED0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  int v6; // r13d
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rdx
  int v18; // eax
  int v19; // esi
  int v20; // esi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // [rsp+10h] [rbp-118h]
  __int64 v25; // [rsp+18h] [rbp-110h]
  __int64 v26; // [rsp+30h] [rbp-F8h] BYREF
  __int64 *v27; // [rsp+38h] [rbp-F0h]
  __int64 (__fastcall **v28)(); // [rsp+40h] [rbp-E8h] BYREF
  int v29; // [rsp+48h] [rbp-E0h]
  __int64 v30; // [rsp+50h] [rbp-D8h]
  __int128 v31; // [rsp+58h] [rbp-D0h]
  __int64 v32; // [rsp+68h] [rbp-C0h]
  __int128 v33; // [rsp+70h] [rbp-B8h]
  __int64 v34; // [rsp+80h] [rbp-A8h]
  __int16 v35; // [rsp+88h] [rbp-A0h]
  bool v36; // [rsp+8Ah] [rbp-9Eh]
  __int64 (__fastcall **v37)(); // [rsp+90h] [rbp-98h] BYREF
  int v38; // [rsp+98h] [rbp-90h]
  __int64 v39; // [rsp+A0h] [rbp-88h]
  __int128 v40; // [rsp+A8h] [rbp-80h]
  __int64 v41; // [rsp+B8h] [rbp-70h]
  __int128 v42; // [rsp+C0h] [rbp-68h]
  __m128i v43; // [rsp+D0h] [rbp-58h]
  int v44; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+E8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 72 )
    return 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( (unsigned int)(v6 - 55) > 1 )
    return 0;
  sub_283C00(&v26, (_QWORD *)a1, a2, a3);
  v8 = v26;
  v9 = *v27;
  if ( v26 == *v27 || *(_DWORD *)(v9 + 28) != -1 )
    return 0;
  switch ( *(_DWORD *)(v9 + 24) )
  {
    case 'H':
    case 'I':
    case 'M':
    case 'P':
    case 'T':
      v10 = *(_QWORD *)(v9 + 40);
      break;
    case 'J':
      v10 = *(_QWORD *)(v9 + 40) + 72LL;
      break;
    default:
      return 0;
  }
  if ( *(_DWORD *)(v10 + 12) == -1 )
  {
    v11 = 0x2000000070002LL;
    v12 = v9 + 16;
    while ( 1 )
    {
      v13 = *(unsigned int *)(v10 + 8);
      if ( (unsigned int)v13 > 0x31 || !_bittest64(&v11, v13) )
        break;
      v12 = v10;
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 24) + 12LL) != -1 )
        return 0;
      v10 = *(_QWORD *)(v10 + 24);
    }
    v24 = v12;
    v14 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
    v28 = (__int64 (__fastcall **)())&off_4E0C78;
    v25 = v14;
    v29 = 4;
    v30 = 0;
    v32 = 0;
    v34 = v14;
    v35 = 0;
    v31 = 0;
    v33 = 0;
    v36 = sub_28DE40(v14);
    if ( (unsigned int)sub_255A80((__int64 *)&v28, v10, v24, 0.0) )
    {
      v3 = 0;
    }
    else
    {
      v3 = (unsigned __int8)v35;
      if ( (_BYTE)v35 )
      {
        v15 = _mm_loadl_epi64((const __m128i *)(a1 + 72));
        v38 = 2;
        v16 = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)v25);
        v37 = (__int64 (__fastcall **)())&off_4E0C38;
        v39 = 0;
        v41 = 0;
        v44 = v6;
        v40 = 0;
        v42 = 0;
        v43 = v16;
        if ( (int)sub_255A80((__int64 *)&v37, v10, v24, *(double *)v16.m128i_i64) <= 0 )
        {
          v3 = 0;
        }
        else
        {
          v17 = *(_QWORD *)a2;
          v18 = *(_DWORD *)(a2 + 12);
          *(_QWORD *)a2 = *(_QWORD *)(v9 + 16);
          v19 = *(_DWORD *)(v9 + 24);
          *(_QWORD *)(v9 + 16) = v17;
          LODWORD(v17) = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v19;
          v20 = *(_DWORD *)(v9 + 28);
          *(_DWORD *)(v9 + 24) = v17;
          LODWORD(v17) = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 12) = v20;
          v21 = *(_QWORD *)(v9 + 40);
          *(_DWORD *)(v9 + 28) = v17;
          v22 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 24) = v21;
          *(_QWORD *)(v9 + 40) = v22;
          *(_DWORD *)(a2 + 12) = v18;
          v23 = *(_QWORD *)v9;
          **(_QWORD **)(v9 + 8) = *(_QWORD *)v9;
          *(_QWORD *)(v23 + 8) = *(_QWORD *)(v9 + 8);
          sub_255050(v9 + 16, *(double *)v16.m128i_i64);
          qfree(v9);
          --*(_QWORD *)(v8 + 16);
        }
        v37 = off_4DBCF8;
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
      }
    }
    v28 = off_4DBCF8;
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
    }
  }
  else
  {
    return 0;
  }
  return v3;
}

