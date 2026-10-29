unsigned __int64 __fastcall sub_143420(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // r14
  _QWORD *v3; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __m128i *v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  __int64 v17; // r13
  __int64 *v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // r13
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  unsigned __int64 v23; // [rsp+18h] [rbp-A0h] BYREF
  unsigned __int64 *v24; // [rsp+20h] [rbp-98h] BYREF
  __int128 v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-78h] BYREF
  __int128 v27; // [rsp+48h] [rbp-70h]
  unsigned __int64 v28; // [rsp+58h] [rbp-60h]
  __m128i si128; // [rsp+60h] [rbp-58h]
  int v30; // [rsp+70h] [rbp-48h]
  __int16 v31; // [rsp+74h] [rbp-44h]
  unsigned __int64 v32; // [rsp+78h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 792);
  v2 = (_QWORD *)*v1;
  if ( *v1 )
  {
    if ( v1[1] )
    {
      v3 = (_QWORD *)v2[1];
      if ( v3 != v2 )
      {
LABEL_4:
        while ( !v3[4] || *((_BYTE *)v3 + 80) )
        {
LABEL_17:
          if ( (*v3 & 2) != 0 )
          {
LABEL_20:
            if ( v2 == v3 )
              return v32 - __readfsqword(0x28u);
          }
          else
          {
            v11 = (_QWORD *)v3[2];
            if ( (*(_BYTE *)v11 & 2) == 0 )
            {
              do
              {
                v3 = v11;
                v11 = (_QWORD *)v11[1];
              }
              while ( (*(_BYTE *)v11 & 2) == 0 );
              goto LABEL_20;
            }
            v13 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
            v14 = *v13;
            if ( (*v13 & 2) == 0 )
            {
              while ( (_QWORD *)v13[2] == v3 )
              {
                v3 = v13;
                v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
                v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v14 & 2) != 0 )
                {
                  v3 = (_QWORD *)v15;
                  if ( v2 != (_QWORD *)v15 )
                    goto LABEL_4;
                  return v32 - __readfsqword(0x28u);
                }
                v13 = (_QWORD *)v15;
              }
            }
            v3 = v13;
            if ( v2 == v13 )
              return v32 - __readfsqword(0x28u);
          }
        }
        v5 = v3[3];
        v28 = 0;
        v30 = 3;
        v23 = v5;
        v27 = 0;
        v31 = 256;
        si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
        v6 = v3[4];
        v26 = 0;
        sub_8DBE0(*(_QWORD *)(v6 + 8), (__int64)&v26);
        v7 = *(__m128i **)(a1 + 792);
        v24 = &v23;
        v8 = sub_142A40(v7 + 1, &v23, &v24) + 24;
        sub_2B2530(a1, v23, 1);
        netnode_setblob();
        *(_DWORD *)(v8 + 8) &= ~1u;
        v24 = nullptr;
        v25 = 0;
        if ( (unsigned __int8)sub_7D9B0((__int64 *)v3[4], (__int64)&v24) )
        {
          netnode_setblob();
          *(_DWORD *)(v8 + 8) &= ~2u;
          *((_BYTE *)v3 + 80) = 1;
        }
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree();
        }
        v9 = v28;
        if ( !v28 )
        {
LABEL_15:
          if ( v26 )
          {
            *(_QWORD *)&v27 = 0;
            qfree();
          }
          goto LABEL_17;
        }
        v10 = *(_QWORD *)v28;
        if ( !si128.m128i_i64[0] )
        {
          *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v28 & 3LL;
          *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
          *(_QWORD *)v28 &= ~1uLL;
          *(_QWORD *)v28 |= 2uLL;
          goto LABEL_13;
        }
        v16 = v10 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        {
LABEL_52:
          *(_QWORD *)v9 = v9 & 0xFFFFFFFFFFFFFFFCLL | v10 & 3;
          *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
          *(_QWORD *)v28 &= ~1uLL;
          *(_QWORD *)v28 |= 2uLL;
          si128.m128i_i64[0] = 0;
LABEL_13:
          if ( v28 )
            qfree();
          goto LABEL_15;
        }
        v17 = *(_QWORD *)(v16 + 8);
        if ( (*(_BYTE *)v17 & 2) != 0 )
        {
          v20 = *(_QWORD *)(v16 + 16);
          if ( (*(_BYTE *)v20 & 2) != 0 )
            goto LABEL_46;
          goto LABEL_39;
        }
        v18 = *(__int64 **)(v17 + 8);
        if ( (*(_BYTE *)v18 & 2) != 0 )
        {
          v19 = *(__int64 **)(v17 + 16);
          if ( (*(_BYTE *)v19 & 2) != 0 )
          {
LABEL_56:
            if ( *(_QWORD *)(v17 + 32) )
            {
              *(_QWORD *)(v17 + 40) = 0;
              qfree();
            }
            *(_QWORD *)v17 |= 2uLL;
LABEL_36:
            if ( v17 )
              qfree();
            v20 = *(_QWORD *)(v16 + 16);
            if ( (*(_BYTE *)v20 & 2) != 0 )
            {
LABEL_45:
              if ( (*(_BYTE *)v16 & 2) != 0 )
              {
LABEL_49:
                if ( v10 > 3 )
                  qfree();
                v9 = v28;
                v10 = *(_QWORD *)v28;
                goto LABEL_52;
              }
LABEL_46:
              if ( *(_QWORD *)(v16 + 32) )
              {
                *(_QWORD *)(v16 + 40) = 0;
                qfree();
              }
              *(_QWORD *)v16 |= 2uLL;
              goto LABEL_49;
            }
LABEL_39:
            v21 = *(__int64 **)(v20 + 8);
            if ( (*(_BYTE *)v21 & 2) != 0 )
            {
              v22 = *(__int64 **)(v20 + 16);
              if ( (*(_BYTE *)v22 & 2) != 0 )
                goto LABEL_60;
            }
            else
            {
              sub_1328F0(v21);
              v22 = *(__int64 **)(v20 + 16);
              if ( (*(_BYTE *)v22 & 2) != 0 )
                goto LABEL_42;
            }
            sub_1328F0(v22);
LABEL_42:
            if ( (*(_BYTE *)v20 & 2) != 0 )
            {
LABEL_43:
              if ( v20 )
                qfree();
              goto LABEL_45;
            }
LABEL_60:
            if ( *(_QWORD *)(v20 + 32) )
            {
              *(_QWORD *)(v20 + 40) = 0;
              qfree();
            }
            *(_QWORD *)v20 |= 2uLL;
            goto LABEL_43;
          }
        }
        else
        {
          sub_1328F0(v18);
          v19 = *(__int64 **)(v17 + 16);
          if ( (*(_BYTE *)v19 & 2) != 0 )
            goto LABEL_35;
        }
        sub_1328F0(v19);
LABEL_35:
        if ( (*(_BYTE *)v17 & 2) != 0 )
          goto LABEL_36;
        goto LABEL_56;
      }
    }
  }
  return v32 - __readfsqword(0x28u);
}

