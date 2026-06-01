unsigned __int64 __fastcall sub_146E60(__int64 a1, __m128i a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i *v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 v18; // r13
  __int64 *v19; // rdi
  __int64 *v20; // rdi
  __int64 v21; // r13
  __int64 *v22; // rdi
  __int64 *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // [rsp+18h] [rbp-A0h] BYREF
  __int64 *v28; // [rsp+20h] [rbp-98h] BYREF
  __int128 v29; // [rsp+28h] [rbp-90h]
  __int64 v30; // [rsp+40h] [rbp-78h] BYREF
  __int128 v31; // [rsp+48h] [rbp-70h]
  __int64 v32; // [rsp+58h] [rbp-60h]
  __m128i si128; // [rsp+60h] [rbp-58h]
  int v34; // [rsp+70h] [rbp-48h]
  __int16 v35; // [rsp+74h] [rbp-44h]
  unsigned __int64 v36; // [rsp+78h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 792);
  v3 = (_QWORD *)*v2;
  if ( *v2 )
  {
    if ( v2[1] )
    {
      v4 = (_QWORD *)v3[1];
      if ( v4 != v3 )
      {
LABEL_4:
        while ( !v4[4] || *((_BYTE *)v4 + 80) )
        {
LABEL_17:
          if ( (*v4 & 2) != 0 )
          {
LABEL_20:
            if ( v3 == v4 )
              return v36 - __readfsqword(0x28u);
          }
          else
          {
            v12 = (_QWORD *)v4[2];
            if ( (*(_BYTE *)v12 & 2) == 0 )
            {
              do
              {
                v4 = v12;
                v12 = (_QWORD *)v12[1];
              }
              while ( (*(_BYTE *)v12 & 2) == 0 );
              goto LABEL_20;
            }
            v14 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
            v15 = *v14;
            if ( (*v14 & 2) == 0 )
            {
              while ( (_QWORD *)v14[2] == v4 )
              {
                v4 = v14;
                v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
                v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v15 & 2) != 0 )
                {
                  v4 = (_QWORD *)v16;
                  if ( v3 != (_QWORD *)v16 )
                    goto LABEL_4;
                  return v36 - __readfsqword(0x28u);
                }
                v14 = (_QWORD *)v16;
              }
            }
            v4 = v14;
            if ( v3 == v14 )
              return v36 - __readfsqword(0x28u);
          }
        }
        v6 = v4[3];
        v32 = 0;
        v34 = 3;
        v27 = v6;
        v31 = 0;
        v35 = 256;
        si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
        v7 = v4[4];
        v30 = 0;
        sub_91620(*(_QWORD *)(v7 + 8), (__int64)&v30, a2);
        v8 = *(__m128i **)(a1 + 792);
        v28 = &v27;
        v9 = sub_146480(v8 + 1, (unsigned __int64 *)&v27, &v28) + 24;
        sub_2B61B0(a1, v27, 1);
        netnode_setblob();
        *(_DWORD *)(v9 + 8) &= ~1u;
        v28 = nullptr;
        v29 = 0;
        if ( (unsigned __int8)sub_813F0((__int64 *)v4[4], (__int64)&v28) )
        {
          netnode_setblob();
          *(_DWORD *)(v9 + 8) &= ~2u;
          *((_BYTE *)v4 + 80) = 1;
        }
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree((__int64)v28);
        }
        v10 = v32;
        if ( !v32 )
        {
LABEL_15:
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree(v30);
          }
          goto LABEL_17;
        }
        v11 = *(_QWORD *)v32;
        if ( !si128.m128i_i64[0] )
        {
          *(_QWORD *)v32 = v32 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v32 & 3LL;
          a2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)v32);
          *(__m128i *)(v32 + 8) = a2;
          *(_QWORD *)v32 &= ~1uLL;
          *(_QWORD *)v32 |= 2uLL;
          goto LABEL_13;
        }
        v17 = v11 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        {
LABEL_52:
          *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | v11 & 3;
          a2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)v32);
          *(__m128i *)(v32 + 8) = a2;
          *(_QWORD *)v32 &= ~1uLL;
          *(_QWORD *)v32 |= 2uLL;
          si128.m128i_i64[0] = 0;
LABEL_13:
          if ( v32 )
            qfree(v32);
          goto LABEL_15;
        }
        v18 = *(_QWORD *)(v17 + 8);
        if ( (*(_BYTE *)v18 & 2) != 0 )
        {
          v21 = *(_QWORD *)(v17 + 16);
          if ( (*(_BYTE *)v21 & 2) != 0 )
            goto LABEL_46;
          goto LABEL_39;
        }
        v19 = *(__int64 **)(v18 + 8);
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          v20 = *(__int64 **)(v18 + 16);
          if ( (*(_BYTE *)v20 & 2) != 0 )
          {
LABEL_56:
            v25 = *(_QWORD *)(v18 + 32);
            if ( v25 )
            {
              *(_QWORD *)(v18 + 40) = 0;
              qfree(v25);
            }
            *(_QWORD *)v18 |= 2uLL;
LABEL_36:
            if ( v18 )
              qfree(v18);
            v21 = *(_QWORD *)(v17 + 16);
            if ( (*(_BYTE *)v21 & 2) != 0 )
            {
LABEL_45:
              if ( (*(_BYTE *)v17 & 2) != 0 )
              {
LABEL_49:
                if ( v11 > 3 )
                  qfree(v11 & 0xFFFFFFFFFFFFFFFCLL);
                v10 = v32;
                v11 = *(_QWORD *)v32;
                goto LABEL_52;
              }
LABEL_46:
              v24 = *(_QWORD *)(v17 + 32);
              if ( v24 )
              {
                *(_QWORD *)(v17 + 40) = 0;
                qfree(v24);
              }
              *(_QWORD *)v17 |= 2uLL;
              goto LABEL_49;
            }
LABEL_39:
            v22 = *(__int64 **)(v21 + 8);
            if ( (*(_BYTE *)v22 & 2) != 0 )
            {
              v23 = *(__int64 **)(v21 + 16);
              if ( (*(_BYTE *)v23 & 2) != 0 )
                goto LABEL_60;
            }
            else
            {
              sub_136330(v22);
              v23 = *(__int64 **)(v21 + 16);
              if ( (*(_BYTE *)v23 & 2) != 0 )
                goto LABEL_42;
            }
            sub_136330(v23);
LABEL_42:
            if ( (*(_BYTE *)v21 & 2) != 0 )
            {
LABEL_43:
              if ( v21 )
                qfree(v21);
              goto LABEL_45;
            }
LABEL_60:
            v26 = *(_QWORD *)(v21 + 32);
            if ( v26 )
            {
              *(_QWORD *)(v21 + 40) = 0;
              qfree(v26);
            }
            *(_QWORD *)v21 |= 2uLL;
            goto LABEL_43;
          }
        }
        else
        {
          sub_136330(v19);
          v20 = *(__int64 **)(v18 + 16);
          if ( (*(_BYTE *)v20 & 2) != 0 )
            goto LABEL_35;
        }
        sub_136330(v20);
LABEL_35:
        if ( (*(_BYTE *)v18 & 2) != 0 )
          goto LABEL_36;
        goto LABEL_56;
      }
    }
  }
  return v36 - __readfsqword(0x28u);
}

