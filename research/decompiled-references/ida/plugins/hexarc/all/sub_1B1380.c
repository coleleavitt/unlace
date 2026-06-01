unsigned __int64 __fastcall sub_1B1380(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __m128i v4; // xmm0
  _QWORD *v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  _QWORD *v11; // r15
  int v12; // r13d
  __int64 *v13; // r12
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rax
  int v17; // r12d
  int v18; // ecx
  _QWORD *v19; // rbx
  __int64 v20; // r15
  const char *v22; // rax
  int v23; // [rsp+8h] [rbp-1118h]
  _QWORD *v24; // [rsp+18h] [rbp-1108h]
  int v25; // [rsp+24h] [rbp-10FCh]
  int v26; // [rsp+24h] [rbp-10FCh]
  __int64 v28; // [rsp+30h] [rbp-10F0h] BYREF
  __int128 v29; // [rsp+38h] [rbp-10E8h]
  _QWORD *v30; // [rsp+50h] [rbp-10D0h]
  __m128i v31; // [rsp+58h] [rbp-10C8h]
  __m128i v32; // [rsp+70h] [rbp-10B0h] BYREF
  __int64 v33; // [rsp+80h] [rbp-10A0h]
  _QWORD v34[5]; // [rsp+90h] [rbp-1090h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-1068h]
  __int128 v36; // [rsp+C0h] [rbp-1060h]
  __int64 v37; // [rsp+D0h] [rbp-1050h]
  char v38[4096]; // [rsp+E0h] [rbp-1040h] BYREF
  unsigned __int64 v39; // [rsp+10E8h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 480);
  v39 = __readfsqword(0x28u);
  if ( under_debugger || *(_BYTE *)(v2 + 1424) )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      v3 = *(_QWORD *)(v2 + 1024);
      if ( *(_QWORD *)(v3 + 120) > 1u )
      {
        v28 = 0;
        v29 = 0;
        sub_65220(&v28);
        if ( (**(_DWORD **)(a1 + 64) & 0x200) != 0 || !strncmp(a2, "debug", 5u) )
        {
          ++*(_DWORD *)(v3 + 140);
          qsnprintf();
          v4 = _mm_loadu_si128((const __m128i *)(v3 + 88));
          v5 = *(_QWORD **)(v3 + 80);
          *(_DWORD *)(v3 + 104) = 0;
          v31 = v4;
          *(_QWORD *)(v3 + 80) = 0;
          *(_OWORD *)(v3 + 88) = 0;
          v24 = v5;
          *(_DWORD *)(v3 + 108) = *(_DWORD *)(a1 + 72);
          v6 = *(_QWORD *)(a1 + 64);
          v7 = *(_QWORD *)(a1 + 480);
          v30 = v5;
          v33 = 0;
          *(_QWORD *)(v7 + 1344) = v6;
          v8 = *(_QWORD *)(a1 + 480);
          v9 = *(_QWORD *)(v8 + 1344);
          *(_QWORD *)(v8 + 1344) = v6;
          v32 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v6 + 1496)), (__m128i)v6);
          sub_1AF000(a1, (void (***)(_QWORD, _QWORD, const char *, ...))(v3 + 40), (__int64)&v32);
          *(_QWORD *)(*(_QWORD *)(a1 + 480) + 1344LL) = v9;
          v10 = *(_QWORD *)(v3 + 88);
          if ( v4.m128i_i64[0] <= v10 )
            LODWORD(v10) = v4.m128i_i32[0];
          v23 = v10;
          v25 = v10;
          if ( (int)v10 > 0 )
          {
            v11 = v5 + 1;
            v12 = 0;
            v13 = (__int64 *)(*(_QWORD *)(v3 + 80) + 8LL);
            while ( 1 )
            {
              v16 = *v13;
              if ( *v11 )
                break;
              v14 = s1;
              if ( v16 )
                goto LABEL_12;
LABEL_14:
              ++v12;
              v11 += 3;
              v13 += 3;
              if ( v25 == v12 )
                goto LABEL_40;
            }
            v14 = (const char *)*(v11 - 1);
            v15 = s1;
            if ( v16 )
LABEL_12:
              v15 = (const char *)*(v13 - 1);
            if ( strcmp(v15, v14) )
              goto LABEL_19;
            goto LABEL_14;
          }
          v12 = 0;
LABEL_19:
          if ( v23 == v12 )
LABEL_40:
            v12 = *(_DWORD *)(v3 + 136);
          v17 = 20 * (v12 / 20);
          if ( fopenWT() )
          {
            if ( *(_DWORD *)(v3 + 136) != 20 * (v12 / 20) )
            {
              *(_DWORD *)(v3 + 136) = 20 * (v12 / 20);
              sub_60540();
              v18 = 20 * (v12 / 20);
              if ( (unsigned __int64)v18 < v4.m128i_i64[0] )
              {
                do
                {
                  v26 = v18;
                  sub_60540();
                  v18 = v26 + 1;
                }
                while ( (unsigned __int64)(v26 + 1) < v4.m128i_i64[0] );
              }
              qfclose();
              strrchr(v38, 46);
              qstrncpy();
              fopenWT();
            }
            sub_60540();
            sub_60540();
            while ( (unsigned __int64)v17 < *(_QWORD *)(v3 + 88) )
            {
              ++v17;
              qfputs();
            }
            sub_60540();
            qfclose();
          }
          else
          {
            v22 = (const char *)qstrerror();
            sub_66B20((__int64)"%s: %s\n", v38, v22);
          }
          memset(&v34[1], 0, 32);
          v34[0] = off_4AAC18;
          v35 = 0;
          v37 = 0;
          v36 = 0;
          sub_317A40(a1, v34);
          v34[0] = off_4AAC18;
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree();
          }
          if ( v24 )
          {
            v19 = v24;
            v20 = 0;
            if ( v4.m128i_i64[0] )
            {
              do
              {
                if ( *v19 )
                {
                  v19[1] = 0;
                  qfree();
                }
                v19 += 3;
                ++v20;
              }
              while ( v4.m128i_i64[0] != v20 );
            }
            qfree();
          }
        }
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree();
        }
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}

