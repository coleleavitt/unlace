__int64 __fastcall sub_10E540(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // ebx
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int *v10; // rax
  unsigned int *v11; // rbp
  unsigned int v12; // ecx
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // ecx
  _QWORD *v17; // rdi
  _DWORD *v18; // rdi
  unsigned int v19; // r12d
  unsigned int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rbx
  void **v24; // rdi
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // ecx
  bool v28; // r13
  __int64 *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r12
  unsigned int v35; // eax
  const __m128i **v36; // rsi
  unsigned int v37; // ebx
  const __m128i *v38; // rax
  __m128i v39; // xmm0
  int v40; // eax
  unsigned int v41; // r12d
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int v45; // [rsp+0h] [rbp-68h]
  unsigned int v46; // [rsp+0h] [rbp-68h]
  unsigned int v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  unsigned int v49; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v50[9]; // [rsp+20h] [rbp-48h] BYREF

  v50[1] = __readfsqword(0x28u);
  v4 = a3 + ((_DWORD)a2 != 1);
  if ( v4 < *(_DWORD *)(a1 + 128) )
  {
    v5 = a3 + ((_DWORD)a2 != 1);
    do
    {
      v6 = v5++;
      sub_C9E70(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 56 * v6 + 16), (__int64)a2);
    }
    while ( v5 < *(_DWORD *)(a1 + 128) );
  }
  *(_DWORD *)(a1 + 128) = v4;
  if ( (_DWORD)a2 == 1 )
  {
    v23 = *(_QWORD *)(a1 + 120) + 56LL * v4;
    v12 = *(_DWORD *)(v23 + 32);
    if ( v12 )
    {
      v24 = *(void ***)(a1 + 88);
      v12 = 0;
      if ( *v24 )
      {
        v25 = *(unsigned int *)(v23 + 28);
        if ( *v24 == &unk_23BDC0 )
        {
          v12 = sub_CDA60((__int64)v24, v25 * (*(_QWORD *)(a1 + 200) + 4LL));
          LODWORD(v25) = *(_DWORD *)(v23 + 28);
        }
        *(_DWORD *)(a1 + 60) = v25;
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 296);
    if ( v7 )
    {
      if ( !v4 || (v8 = *(_QWORD *)(a1 + 120), v48 = v8 + 56LL * v4 - 56, v8 + 56LL * v4 == 56) )
      {
        v27 = 0;
        v28 = 1;
        *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 36);
        *(_BYTE *)(a1 + 23) = *(_BYTE *)(a1 + 16);
        if ( *(_BYTE *)(v7 + 64) )
        {
          v36 = *(const __m128i ***)(v7 + 48);
          v37 = *(_DWORD *)(v7 + 88);
          v38 = *v36;
          *(__m128i *)(v7 + 72) = _mm_loadu_si128(*v36);
          *(__m128i *)(v7 + 88) = _mm_loadu_si128(v38 + 1);
          v39 = _mm_loadu_si128(v38 + 2);
          v40 = *(_DWORD *)(v7 + 88);
          *(__m128i *)(v7 + 104) = v39;
          v41 = v40 + 1;
          if ( v37 >= v40 + 1 )
          {
            while ( 1 )
            {
              v43 = ((unsigned __int64)(v41 + 4096) - 4063) >> 12;
              v42 = (_DWORD)v43
                  ? *(unsigned int *)((char *)v36[(int)v43]->m128i_u32 + ((4 * (_WORD)v41 + 132) & 0x3FFC))
                  : (*v36)[8].m128i_u32[v41 + 1];
              ++v41;
              v27 = sub_EC850(a1, v42);
              v28 = v27 == 0;
              if ( v37 < v41 || v27 )
                break;
              v36 = *(const __m128i ***)(v7 + 48);
            }
            v40 = *(_DWORD *)(v7 + 88);
          }
          if ( v37 != v40 )
          {
            v47 = v27;
            sub_D2B50(v7);
            v27 = v47;
          }
        }
        v29 = *(__int64 **)(a1 + 288);
        v30 = *v29;
        if ( *v29 )
        {
          do
          {
            v31 = *(_QWORD *)(v30 + 56);
            *(_QWORD *)(v30 + 32) = v31;
            v30 = v31;
          }
          while ( v31 );
          v30 = *v29;
        }
        v46 = v27;
        v32 = sub_C8CA0(v30);
        v12 = v46;
        if ( v32 && v28 )
        {
          do
          {
            v33 = *(_QWORD *)(v32 + 32);
            v12 = sub_EC850(a1, *(unsigned int *)(v32 + 48));
            v32 = v33;
          }
          while ( v33 && !v12 );
        }
        return v12;
      }
    }
    else
    {
      if ( !**(_QWORD **)(a1 + 80) )
        return 0;
      if ( !v4 || (v44 = *(_QWORD *)(a1 + 120), v48 = v44 + 56LL * v4 - 56, v44 + 56LL * v4 == 56) )
      {
        v26 = *(_DWORD *)(a1 + 36);
        v14 = *(_QWORD *)(a1 + 96);
        v11 = nullptr;
        *(_QWORD *)(a1 + 96) = 0;
        v48 = 0;
        *(_DWORD *)(a1 + 32) = v26;
        *(_BYTE *)(a1 + 23) = *(_BYTE *)(a1 + 16);
        if ( v14 > 0 )
        {
LABEL_12:
          while ( 1 )
          {
            a2 = nullptr;
            v49 = 0;
            v16 = sub_D3400(a1, 0, v14, &v49, v50);
            if ( v49 )
              break;
            a2 = *(_QWORD **)(a1 + 96);
            v17 = (_QWORD *)(*(_QWORD *)(a1 + 104) + *(unsigned int *)(a1 + 184));
            if ( v17 == a2 )
            {
              v22 = (v14 - (__int64)v17) / (*(_QWORD *)(a1 + 200) + 8LL);
              v49 = v22;
              if ( v16 )
                goto LABEL_15;
              if ( (_DWORD)v22 )
                goto LABEL_26;
            }
            else if ( v16 )
            {
              goto LABEL_15;
            }
LABEL_31:
            if ( (__int64)a2 >= v14 )
              goto LABEL_32;
          }
          if ( v16 )
            goto LABEL_15;
          v17 = *(_QWORD **)(a1 + 96);
LABEL_26:
          if ( (__int64)v17 >= v14 )
          {
LABEL_32:
            if ( v48 )
              goto LABEL_68;
            goto LABEL_33;
          }
          v21 = 0;
          while ( 1 )
          {
            a2 = (_QWORD *)(a1 + 96);
            ++v21;
            v16 = sub_10E140(a1, (_QWORD *)(a1 + 96), v11, 1, 1);
            if ( v16 )
              break;
            a2 = *(_QWORD **)(a1 + 96);
            if ( v21 >= v49 || v14 <= (__int64)a2 )
              goto LABEL_31;
          }
LABEL_15:
          if ( v48 )
          {
            v18 = *(_DWORD **)(a1 + 296);
            v19 = *(_DWORD *)(v48 + 28);
            v50[0] = v19 * (*(_QWORD *)(a1 + 200) + 4LL);
            if ( v18 )
              goto LABEL_64;
          }
          goto LABEL_22;
        }
        goto LABEL_33;
      }
    }
    v9 = *(_DWORD *)(v48 + 24);
    v10 = (unsigned int *)sub_D2260(0x200u, (__int64)a2);
    v11 = v10;
    v12 = 7;
    if ( v10 )
    {
      *v10 = v9;
      v13 = *(_QWORD *)(a1 + 296) == 0;
      v14 = *(_QWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(v48 + 24);
      *(_BYTE *)(a1 + 23) = *(_BYTE *)(a1 + 16);
      if ( v13 )
      {
        v34 = *(_QWORD *)(v48 + 8);
        v15 = *(_QWORD *)v48;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)v48;
        if ( !v34 )
          v34 = v14;
        while ( v34 > v15 )
        {
          a2 = (_QWORD *)(a1 + 96);
          v16 = sub_10E140(a1, (_QWORD *)(a1 + 96), v11, 1, 1);
          if ( v16 )
          {
            v18 = *(_DWORD **)(a1 + 296);
            v19 = *(_DWORD *)(v48 + 28);
            v50[0] = v19 * (*(_QWORD *)(a1 + 200) + 4LL);
            if ( !v18 )
              goto LABEL_22;
            goto LABEL_64;
          }
          v15 = *(_QWORD *)(a1 + 96);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 96) = 0;
        v15 = 0;
      }
      if ( v15 < v14 )
        goto LABEL_12;
LABEL_68:
      v18 = *(_DWORD **)(a1 + 296);
      v19 = *(_DWORD *)(v48 + 28);
      v50[0] = v19 * (*(_QWORD *)(a1 + 200) + 4LL);
      if ( v18 )
      {
LABEL_64:
        if ( *(_DWORD *)(v48 + 48) == v18[34] )
        {
          v35 = *(_DWORD *)(v48 + 36);
        }
        else
        {
          *(_DWORD *)(v48 + 36) = 0;
          *(_DWORD *)(v48 + 48) = v18[34];
          v35 = 0;
        }
        if ( v18[22] > v35 )
        {
          v18[22] = v35;
          v18[24] = *(_DWORD *)(v48 + 40);
          v18[25] = *(_DWORD *)(v48 + 44);
          sub_D2B50((__int64)v18);
          v19 = *(_DWORD *)(v48 + 28);
        }
      }
      if ( v19 < *(_DWORD *)(a1 + 60) )
      {
        while ( 1 )
        {
          a2 = v50;
          ++v19;
          v16 = sub_10E140(a1, v50, v11, 0, 1);
          if ( v16 )
            break;
          if ( v19 >= *(_DWORD *)(a1 + 60) )
            goto LABEL_33;
        }
LABEL_22:
        v45 = v16;
        sub_C9E70((__int64)v11, (__int64)a2);
        return v45;
      }
LABEL_33:
      sub_C9E70((__int64)v11, (__int64)a2);
      *(_QWORD *)(a1 + 96) = v14;
      return 0;
    }
  }
  return v12;
}
