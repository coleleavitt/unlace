_QWORD *__fastcall sub_6300(__int64 a1, unsigned __int8 a2)
{
  _QWORD *exception; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // r13
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  int v10; // edx
  int v11; // esi
  unsigned int v12; // ecx
  _BYTE *v14; // rdi
  int v15; // esi
  int v16; // edx
  char v17; // r14
  __int64 *v18; // rax
  __int64 v19; // r9
  __int64 v20; // r10
  size_t v21; // rdx
  __int64 v22; // r11
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // r12
  __int64 v27; // r8
  size_t v28; // rdx
  _QWORD *v29; // r14
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v34; // rsi
  _QWORD *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // [rsp+0h] [rbp-58h]
  char *v46; // [rsp+0h] [rbp-58h]
  __int64 v47; // [rsp+0h] [rbp-58h]
  _QWORD *v48; // [rsp+0h] [rbp-58h]
  __int64 v49; // [rsp+0h] [rbp-58h]
  __int64 v50; // [rsp+0h] [rbp-58h]
  _QWORD *v51; // [rsp+0h] [rbp-58h]
  __int64 v52; // [rsp+8h] [rbp-50h]
  __int64 v53; // [rsp+8h] [rbp-50h]
  __int64 v54; // [rsp+8h] [rbp-50h]
  __int64 v55; // [rsp+10h] [rbp-48h]
  __int64 v56; // [rsp+10h] [rbp-48h]
  _QWORD *v57; // [rsp+18h] [rbp-40h]

  v3 = (_QWORD *)(a1 + 24LL * a2);
  v4 = v3 + 72;
  v5 = v3[73];
  if ( !v5 )
  {
    v6 = a2;
    v7 = (unsigned __int64)a2 >> 3;
    v10 = a2;
    v11 = *(unsigned __int8 *)(a1 + v7 + 512);
    v12 = a2 & 7;
    if ( _bittest(&v11, v12) )
    {
      v14 = (_BYTE *)(a1 + v7 + 544);
      v15 = (unsigned __int8)*v14;
      if ( _bittest(&v15, v12) )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = "recursive pair detected!";
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
      }
      v16 = 2 * v10;
      *v14 |= 1 << v12;
      v17 = *(_BYTE *)(a1 + v16 + 1);
      if ( *(_BYTE *)(a1 + v16) == a2 )
      {
        v38 = v3[73];
        v39 = v3[72];
        if ( v3[74] < (unsigned __int64)(v38 + 1) )
        {
          v51 = v3;
          v39 = qvector_reserve(v4, v39, v38 + 1, 1);
          v51[72] = v39;
          v38 = v51[73];
        }
        *(_BYTE *)(v39 + v38) = a2;
        ++*(_QWORD *)(a1 + 24 * v6 + 584);
      }
      else
      {
        v45 = v3;
        v18 = (__int64 *)sub_6300(a1);
        v19 = v18[1];
        if ( v19 )
        {
          v20 = *v18;
          v21 = 0;
          v22 = v45[73];
          v23 = v45[72];
          if ( v45[74] < (unsigned __int64)(v22 + v19) )
          {
            v57 = v45;
            v56 = v18[1];
            v53 = *v18;
            v49 = v45[73];
            v40 = qvector_reserve(v4, v23, v22 + v19, 1);
            v22 = v49;
            v19 = v56;
            v20 = v53;
            v23 = v40;
            v41 = v57[73];
            v57[72] = v40;
            v21 = v41 - v49;
          }
          v55 = v20;
          v52 = v19;
          v46 = (char *)(v22 + v23);
          memmove(&v46[v19], v46, v21);
          v24 = 0;
          do
          {
            v46[v24] = *(_BYTE *)(v55 + v24);
            ++v24;
          }
          while ( v24 != v52 );
          *(_QWORD *)(a1 + 24 * v6 + 584) += v52;
        }
      }
      if ( v17 == a2 )
      {
        v35 = (_QWORD *)(a1 + 24 * v6);
        v36 = v35[73];
        v37 = v35[72];
        if ( v35[74] < (unsigned __int64)(v36 + 1) )
        {
          v44 = qvector_reserve(v4, v37, v36 + 1, 1);
          v35[72] = v44;
          v37 = v44;
          v36 = v35[73];
        }
        *(_BYTE *)(v37 + v36) = a2;
        ++*(_QWORD *)(a1 + 24 * v6 + 584);
      }
      else
      {
        v25 = (__int64 *)sub_6300(a1);
        v26 = v25[1];
        if ( v26 )
        {
          v27 = *v25;
          v28 = 0;
          v29 = (_QWORD *)(a1 + 24 * v6);
          v30 = v29[73];
          v31 = v29[72];
          if ( v29[74] < (unsigned __int64)(v30 + v26) )
          {
            v54 = *v25;
            v50 = v29[73];
            v42 = qvector_reserve(v4, v31, v30 + v26, 1);
            v43 = v29[73];
            v30 = v50;
            v29[72] = v42;
            v27 = v54;
            v31 = v42;
            v28 = v43 - v50;
          }
          v32 = v31 + v30;
          v47 = v27;
          memmove((void *)(v31 + v30 + v26), (const void *)(v31 + v30), v28);
          do
          {
            *(_BYTE *)(v32 + v5) = *(_BYTE *)(v47 + v5);
            ++v5;
          }
          while ( v26 != v5 );
          *(_QWORD *)(a1 + 24 * v6 + 584) += v26;
        }
      }
    }
    else
    {
      v34 = v3[72];
      if ( !v3[74] )
      {
        v48 = v3;
        v34 = qvector_reserve(v4, v34, 1, 1);
        v48[72] = v34;
        v5 = v48[73];
      }
      *(_BYTE *)(v34 + v5) = a2;
      ++*(_QWORD *)(a1 + 24 * v6 + 584);
    }
  }
  return v4;
}
