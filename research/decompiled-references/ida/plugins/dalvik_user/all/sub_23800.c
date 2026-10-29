__int64 __fastcall sub_23800(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // rbx
  int v8; // r12d
  __int8 *i; // r13
  int v10; // eax
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int8 v15; // r10
  unsigned __int64 v16; // rax
  __m128i *v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // r11
  int v21; // edx
  int v22; // eax
  unsigned __int16 v23; // dx
  __m128i si128; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r13
  bool v31; // cc
  _DWORD *v32; // rsi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned __int64 v35; // rsi
  _QWORD *v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  size_t v41; // r11
  int v42; // edx
  int v43; // eax
  int v44; // eax
  unsigned __int16 v45; // dx
  __int64 v46; // rax
  __int64 v47; // rax
  void *v48; // rdi
  __int64 v49; // rax
  void *src; // [rsp+8h] [rbp-60h]
  unsigned __int64 v51; // [rsp+10h] [rbp-58h]
  int v52; // [rsp+18h] [rbp-50h]
  __int8 v53; // [rsp+1Fh] [rbp-49h]
  __int64 v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+28h] [rbp-40h]

  v3 = sub_1BF40(a1, a2);
  result = *(unsigned __int16 *)(a2 + 354);
  if ( (_DWORD)result == v3 )
  {
    if ( (*(_BYTE *)(a2 + 89) & 1) == 0 )
    {
      v6 = *(_QWORD *)(a2 + 96);
      if ( v6 != -1 )
      {
        v7 = (__int64)(*(_QWORD *)(a2 + 344) - *(_QWORD *)(a2 + 336)) >> 1;
        v8 = *(unsigned __int16 *)(a2 + 352) - (_DWORD)result;
        v52 = v7;
        if ( (*(_BYTE *)(a2 + 332) & 8) == 0 )
        {
          v28 = *(_QWORD *)(a2 + 152);
          v29 = *(_QWORD *)(a2 + 144);
          if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v28 + 1) )
          {
            v47 = qvector_reserve();
            v28 = *(_QWORD *)(a2 + 152);
            *(_QWORD *)(a2 + 144) = v47;
            v29 = v47;
          }
          v30 = v29 + 120 * v28;
          *(_QWORD *)(v30 + 8) = 0;
          *(_OWORD *)(v30 + 16) = 0;
          *(_QWORD *)(v30 + 32) = 0;
          *(_QWORD *)(v30 + 56) = 0;
          *(_BYTE *)(v30 + 88) = 0;
          *(_BYTE *)(v30 + 112) = 0;
          *(_OWORD *)(v30 + 40) = 0;
          *(_OWORD *)(v30 + 64) = 0;
          ++*(_QWORD *)(a2 + 152);
          v31 = *(_QWORD *)(v30 + 24) <= 4u;
          *(_QWORD *)v30 = v6;
          v32 = *(_DWORD **)(v30 + 8);
          *(_DWORD *)(v30 + 80) = v7;
          if ( v31 )
          {
            v46 = qvector_reserve();
            *(_QWORD *)(v30 + 8) = v46;
            v32 = (_DWORD *)v46;
          }
          *(_QWORD *)(v30 + 16) = 5;
          v33 = a1 + 120;
          *v32 = 1936287860;
          *(_BYTE *)(*(_QWORD *)(v30 + 8) + 4LL) = 0;
          v34 = *(_QWORD **)(a1 + 128);
          v35 = *(_QWORD *)a2;
          if ( v34 )
          {
            v36 = (_QWORD *)(a1 + 120);
            do
            {
              while ( 1 )
              {
                v37 = v34[2];
                v38 = v34[3];
                if ( v34[4] < v35 )
                  break;
                v36 = v34;
                v34 = (_QWORD *)v34[2];
                if ( !v37 )
                  goto LABEL_38;
              }
              v34 = (_QWORD *)v34[3];
            }
            while ( v38 );
LABEL_38:
            if ( v36 != (_QWORD *)v33 && v35 >= v36[4] )
            {
              v39 = *(_QWORD *)(a1 + 40) + 72LL * *((int *)v36 + 10);
              if ( v30 + 32 != v39 + 16 )
              {
                v40 = *(_QWORD *)(v39 + 24);
                if ( v40 && (v41 = v40 - 1, v40 != 1) )
                {
                  v48 = *(void **)(v30 + 32);
                  src = *(void **)(v39 + 16);
                  if ( *(_QWORD *)(v30 + 48) < v40 )
                  {
                    v49 = qvector_reserve();
                    v41 = v40 - 1;
                    *(_QWORD *)(v30 + 32) = v49;
                    v48 = (void *)v49;
                  }
                  *(_QWORD *)(v30 + 40) = v40;
                  memmove(v48, src, v41);
                  *(_BYTE *)(*(_QWORD *)(v30 + 32) + v40 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v30 + 40) = 0;
                }
              }
            }
          }
          v42 = *(_DWORD *)(a1 + 32);
          if ( v42 > 20 )
          {
            v43 = v8;
            if ( v42 <= 27 )
            {
              v44 = *(unsigned __int16 *)(a2 + 354);
              v45 = *(_WORD *)(a2 + 352) - v44;
              v43 = v8 + v44;
              if ( v8 >= v45 )
                v43 = v8 - v45;
            }
          }
          else
          {
            v43 = *(_DWORD *)(a2 + 88) & 8;
            if ( v43 || v8 != *(unsigned __int16 *)(a2 + 352) - *(unsigned __int16 *)(a2 + 354) )
            {
              v43 = 1000;
              if ( v8 )
                v43 = v8;
            }
          }
          *(_DWORD *)(v30 + 84) = v43;
          ++v8;
        }
        result = *(_QWORD *)(a2 + 368);
        for ( i = (__int8 *)(result + 1); *i; v8 += result + 1 )
        {
          v12 = *(_QWORD *)(a2 + 152);
          v13 = *(_QWORD *)(a2 + 144);
          if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v12 + 1) )
          {
            v26 = qvector_reserve();
            v12 = *(_QWORD *)(a2 + 152);
            *(_QWORD *)(a2 + 144) = v26;
            v13 = v26;
          }
          v14 = v13 + 120 * v12;
          *(_QWORD *)(v14 + 8) = 0;
          *(_QWORD *)(v14 + 32) = 0;
          *(_QWORD *)(v14 + 56) = 0;
          *(_BYTE *)(v14 + 88) = 0;
          *(_BYTE *)(v14 + 112) = 0;
          *(_OWORD *)(v14 + 16) = 0;
          *(_OWORD *)(v14 + 40) = 0;
          *(_OWORD *)(v14 + 64) = 0;
          ++*(_QWORD *)(a2 + 152);
          *(_DWORD *)(v14 + 80) = v52;
          *(_QWORD *)v14 = v6;
          sub_13B20((__int64 *)(v14 + 8));
          v15 = *i;
          v16 = *(_QWORD *)(v14 + 48);
          v17 = *(__m128i **)(v14 + 32);
          if ( *i == 76 )
          {
            if ( v16 <= 0x12 )
            {
              v27 = qvector_reserve();
              *(_QWORD *)(v14 + 32) = v27;
              v17 = (__m128i *)v27;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_6A3E0);
            *(_QWORD *)(v14 + 40) = 19;
            v17[1].m128i_i16[0] = 15220;
            *v17 = si128;
            *(_BYTE *)(*(_QWORD *)(v14 + 32) + 18LL) = 0;
            goto LABEL_18;
          }
          v18 = *(_QWORD *)(v14 + 40);
          if ( v18 )
          {
            v19 = v18 + 1;
            v20 = *(_QWORD *)(v14 + 40);
            --v18;
            if ( v16 < v19 )
              goto LABEL_28;
          }
          else
          {
            v19 = 2;
            v20 = 1;
            if ( v16 < 2 )
            {
LABEL_28:
              v55 = v20;
              v54 = v18;
              v53 = *i;
              v51 = v19;
              v25 = qvector_reserve();
              v20 = v55;
              v18 = v54;
              *(_QWORD *)(v14 + 32) = v25;
              v15 = v53;
              v17 = (__m128i *)v25;
              v19 = v51;
            }
          }
          *(_QWORD *)(v14 + 40) = v19;
          v17->m128i_i8[v18] = v15;
          *(_BYTE *)(*(_QWORD *)(v14 + 32) + v20) = 0;
LABEL_18:
          v21 = *(_DWORD *)(a1 + 32);
          if ( v21 <= 20 )
          {
            v10 = *(_DWORD *)(a2 + 88) & 8;
            if ( v10 || v8 != *(unsigned __int16 *)(a2 + 352) - *(unsigned __int16 *)(a2 + 354) )
            {
              v10 = 1000;
              if ( v8 )
                v10 = v8;
            }
          }
          else
          {
            v10 = v8;
            if ( v21 <= 27 )
            {
              v22 = *(unsigned __int16 *)(a2 + 354);
              v23 = *(_WORD *)(a2 + 352) - v22;
              v10 = v8 + v22;
              if ( v8 >= v23 )
                v10 = v8 - v23;
            }
          }
          *(_DWORD *)(v14 + 84) = v10;
          v11 = *i++;
          result = (v11 == 74) | (unsigned __int8)(v11 == 68);
        }
      }
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_23D40(1201);
  }
  return result;
}

