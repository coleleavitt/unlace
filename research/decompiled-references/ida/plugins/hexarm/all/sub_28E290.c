__int64 __fastcall sub_28E290(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  int v5; // r13d
  __int64 *v7; // r14
  __int64 *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r10
  __m128i v14; // xmm0
  __int64 v15; // rdx
  int v16; // eax
  int v17; // esi
  int v18; // esi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+10h] [rbp-118h]
  __int64 v23; // [rsp+18h] [rbp-110h]
  __int64 *v24; // [rsp+30h] [rbp-F8h] BYREF
  __int64 **v25; // [rsp+38h] [rbp-F0h]
  __int64 (__fastcall **v26)(); // [rsp+40h] [rbp-E8h] BYREF
  int v27; // [rsp+48h] [rbp-E0h]
  __int64 v28; // [rsp+50h] [rbp-D8h]
  __int128 v29; // [rsp+58h] [rbp-D0h]
  __int64 v30; // [rsp+68h] [rbp-C0h]
  __int128 v31; // [rsp+70h] [rbp-B8h]
  __int64 v32; // [rsp+80h] [rbp-A8h]
  __int16 v33; // [rsp+88h] [rbp-A0h]
  bool v34; // [rsp+8Ah] [rbp-9Eh]
  __int64 (__fastcall **v35)(); // [rsp+90h] [rbp-98h] BYREF
  int v36; // [rsp+98h] [rbp-90h]
  __int64 v37; // [rsp+A0h] [rbp-88h]
  __int128 v38; // [rsp+A8h] [rbp-80h]
  __int64 v39; // [rsp+B8h] [rbp-70h]
  __int128 v40; // [rsp+C0h] [rbp-68h]
  __m128i v41; // [rsp+D0h] [rbp-58h]
  int v42; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v43; // [rsp+E8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 72 )
    return 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( (unsigned int)(v5 - 55) > 1 )
    return 0;
  sub_283FC0(&v24, (_QWORD *)a1, a2);
  v7 = v24;
  v8 = *v25;
  if ( v24 == *v25 || *((_DWORD *)v8 + 7) != -1 )
    return 0;
  switch ( *((_DWORD *)v8 + 6) )
  {
    case 'H':
    case 'I':
    case 'M':
    case 'P':
    case 'T':
      v9 = v8[5];
      break;
    case 'J':
      v9 = v8[5] + 72;
      break;
    default:
      return 0;
  }
  if ( *(_DWORD *)(v9 + 12) == -1 )
  {
    v10 = 0x2000000070002LL;
    v11 = (__int64)(v8 + 2);
    while ( 1 )
    {
      v12 = *(unsigned int *)(v9 + 8);
      if ( (unsigned int)v12 > 0x31 || !_bittest64(&v10, v12) )
        break;
      v11 = v9;
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 24) + 12LL) != -1 )
        return 0;
      v9 = *(_QWORD *)(v9 + 24);
    }
    v22 = v11;
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
    v26 = (__int64 (__fastcall **)())&off_4DB338;
    v23 = v13;
    v27 = 4;
    v28 = 0;
    v30 = 0;
    v32 = v13;
    v33 = 0;
    v29 = 0;
    v31 = 0;
    v34 = sub_28E200(v13);
    if ( (unsigned int)sub_255E40((__int64 *)&v26, v9, v22) )
    {
      v2 = 0;
    }
    else
    {
      v2 = (unsigned __int8)v33;
      if ( (_BYTE)v33 )
      {
        v14 = _mm_loadl_epi64((const __m128i *)(a1 + 72));
        v36 = 2;
        v35 = (__int64 (__fastcall **)())&off_4DB2F8;
        v37 = 0;
        v39 = 0;
        v42 = v5;
        v38 = 0;
        v40 = 0;
        v41 = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)v23);
        if ( (int)sub_255E40((__int64 *)&v35, v9, v22) <= 0 )
        {
          v2 = 0;
        }
        else
        {
          v15 = *(_QWORD *)a2;
          v16 = *(_DWORD *)(a2 + 12);
          *(_QWORD *)a2 = v8[2];
          v17 = *((_DWORD *)v8 + 6);
          v8[2] = v15;
          LODWORD(v15) = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v17;
          v18 = *((_DWORD *)v8 + 7);
          *((_DWORD *)v8 + 6) = v15;
          LODWORD(v15) = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 12) = v18;
          v19 = v8[5];
          *((_DWORD *)v8 + 7) = v15;
          v20 = *(_QWORD *)(a2 + 24);
          *(_QWORD *)(a2 + 24) = v19;
          v8[5] = v20;
          *(_DWORD *)(a2 + 12) = v16;
          v21 = *v8;
          *(_QWORD *)v8[1] = *v8;
          *(_QWORD *)(v21 + 8) = v8[1];
          sub_255410((__int64)(v8 + 2));
          qfree();
          --v7[2];
        }
        v35 = off_4D63B8;
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree();
        }
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree();
        }
      }
    }
    v26 = off_4D63B8;
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v2;
}

