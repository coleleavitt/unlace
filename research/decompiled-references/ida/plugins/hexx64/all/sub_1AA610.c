__int64 __fastcall sub_1AA610(__int64 a1, double a2, __m128 a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // r9d
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // eax
  double v16; // xmm0_8
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rbp
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rbp
  int v24; // eax
  int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v33; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+18h] [rbp-90h]
  __int64 v36; // [rsp+20h] [rbp-88h]
  int v37; // [rsp+28h] [rbp-80h]
  __int64 v38; // [rsp+2Ch] [rbp-7Ch]
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int128 v40; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+58h] [rbp-50h]
  int v43; // [rsp+60h] [rbp-48h]
  __int64 v44; // [rsp+64h] [rbp-44h]
  unsigned __int64 v45; // [rsp+78h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 16);
  v5 = v4[35];
  v6 = *(unsigned __int8 *)(v5 + 320);
  if ( !(_BYTE)v6 && *(_BYTE *)(*(_QWORD *)(v5 + 1496) + 148LL) )
    return v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  v33 = 0;
  v10 = *(char *)(v7 + 13);
  v11 = *(char *)(v7 + 12);
  v34 = 0;
  v12 = *(_QWORD *)(a1 + 16);
  v40 = 0;
  v43 = v10;
  v13 = *(unsigned __int8 *)(a1 + 468);
  v37 = v11;
  v35 = v12 + 96;
  v36 = 0;
  v38 = 0xFFFFFFFFLL;
  v39 = 0;
  v41 = v12 + 120;
  v42 = 0;
  v44 = 0xFFFFFFFFLL;
  if ( (_BYTE)v13 || *(_DWORD *)(a1 + 88) == -1 )
  {
    v25 = *(_DWORD *)(v5 + 72);
    sub_19D620(&v33, *(_QWORD *)(v12 + 280), v13, v12 + 120, v8, v9, 0.0, a3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
    v26 = v41;
    v27 = (int)v38;
    *(_BYTE *)(a1 + 468) = 1;
    v28 = (int)v44;
    v29 = v40;
    v30 = *(_QWORD *)(v26 + 8);
    if ( v27 == -1 )
    {
      v31 = *(_DWORD *)(a1 + 88);
    }
    else
    {
      v31 = *(_QWORD *)(v35 + 8) - v34;
      *(_QWORD *)(a1 + 80) = v27;
      *(_DWORD *)(a1 + 88) = v31;
    }
    if ( v28 != -1 )
    {
      *(_QWORD *)(a1 + 104) = v28;
      *(_DWORD *)(a1 + 112) = v30 - v29;
    }
    if ( v31 == -1
      || (v14 = *(_DWORD *)(v5 + 72), LOBYTE(v13) = (v25 & 0xFFFFFFF0) != 208 && (v25 & 0xFFFFFFF0) != 64, v14 == 128) )
    {
LABEL_27:
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      goto LABEL_29;
    }
LABEL_6:
    v15 = v14 & 0xFFFFFFF0;
    if ( v15 == 64 || v15 == 208 || !*(_BYTE *)(v5 + 320) && (*(_BYTE *)(v5 + 4) & 0x20) == 0 )
    {
      v16 = (*(double (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(
              *(_QWORD *)(a1 + 16),
              a1 + 64,
              (unsigned __int8)v13);
      if ( (unsigned int)sub_1A9240(a1, (__m128i *)&v33, v16, a3) )
      {
        if ( (int)v34 > 0 )
        {
          v17 = 0;
          v18 = 8LL * (unsigned int)(v34 - 1) + 8;
          do
          {
            v19 = v36;
            sub_11D5A0(*(_QWORD *)(v33 + v17));
            v20 = *(_DWORD *)(v19 + 24);
            v17 += 8;
            BYTE1(v20) &= ~2u;
            LOBYTE(v20) = v20 | 0x80;
            *(_DWORD *)(v19 + 24) = v20;
          }
          while ( v18 != v17 );
        }
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v33);
          v33 = 0;
          *((_QWORD *)&v34 + 1) = 0;
        }
        if ( (int)v40 > 0 )
        {
          v21 = 0;
          v22 = 8LL * (unsigned int)(v40 - 1) + 8;
          do
          {
            v23 = v42;
            sub_11D5A0(*(_QWORD *)(v39 + v21));
            v24 = *(_DWORD *)(v23 + 24);
            v21 += 8;
            BYTE1(v24) &= ~2u;
            LOBYTE(v24) = v24 | 0x80;
            *(_DWORD *)(v23 + 24) = v24;
          }
          while ( v21 != v22 );
        }
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
        v6 = 1;
        goto LABEL_30;
      }
    }
    goto LABEL_27;
  }
  v14 = *(_DWORD *)(v5 + 72);
  if ( v14 != 128 )
    goto LABEL_6;
LABEL_29:
  v6 = 0;
LABEL_30:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  return v6;
}

