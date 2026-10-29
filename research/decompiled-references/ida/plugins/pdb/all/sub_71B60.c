__int64 *__fastcall sub_71B60(__int64 *a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, unsigned int *); // rax
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // eax
  unsigned int v22; // ebp
  unsigned int v23; // esi
  _DWORD *v24; // r15
  unsigned int *v25; // rbp
  __int64 v26; // r14
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // r14d
  int v32; // ebp
  unsigned int v33; // r14d
  unsigned int v34; // ebp
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // [rsp+Ch] [rbp-5Ch]
  unsigned int v42; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v43[9]; // [rsp+20h] [rbp-48h] BYREF

  v43[1] = __readfsqword(0x28u);
  v7 = operator new(0x20u);
  *a1 = v7;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  *(_OWORD *)(v7 + 16) = 0;
  v8 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a3 + 176LL);
  if ( v8 == sub_5D830 )
  {
    v9 = *(_DWORD *)(a3 + 16);
    v42 = v9;
  }
  else
  {
    if ( (unsigned int)v8(a3, &v42) )
      return a1;
    v9 = v42;
  }
  v10 = a2[1];
  v11 = *a2;
  v12 = *a2;
  v13 = a2[1] - *a2;
  if ( v9 < (unsigned __int64)(v13 >> 3) )
  {
    if ( !v9 )
    {
      if ( v13 != 8 )
      {
        v15 = 1;
        v16 = 1;
        do
        {
          v17 = *(_QWORD *)(v11 + 8 * v16);
          if ( *(_DWORD *)(v17 + 60) == 1 && (!a4 || *(_DWORD *)(v17 + 20) == a4) )
          {
            v18 = *a1;
            v19 = *(_QWORD *)(*a1 + 16);
            v20 = *(_QWORD *)(*a1 + 8);
            if ( *(_QWORD *)(*a1 + 24) < (unsigned __int64)(v19 + 1) )
            {
              v30 = qvector_reserve(v18 + 8, v20, v19 + 1, 4);
              *(_QWORD *)(v18 + 8) = v30;
              v20 = v30;
              v19 = *(_QWORD *)(v18 + 16);
            }
            *(_DWORD *)(v20 + 4 * v19) = v15;
            ++*(_QWORD *)(v18 + 16);
            v11 = *a2;
            v10 = a2[1];
          }
          v16 = ++v15;
        }
        while ( v15 < (unsigned __int64)((v10 - v11) >> 3) );
      }
      return a1;
    }
    if ( (*(_BYTE *)(a3 + 48) & 1) != 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a3 + 304LL))(
              a3,
              v10,
              v11,
              v13,
              v9,
              v12);
      v22 = v21;
      if ( !v21 )
        return a1;
      v23 = v21;
      v24 = sub_5FD60(a2 + 45, v21);
      if ( !v24 )
      {
        if ( !(unsigned __int8)sub_718B0(a2, v23) )
          return a1;
        v24 = sub_5FD60(a2 + 45, v22);
        if ( !v24 )
          return a1;
      }
      v25 = *((unsigned int **)v24 + 2);
      if ( !(4LL * *((_QWORD *)v24 + 3)) )
        return a1;
      while ( !(unsigned int)sub_55AD0(a2, v43, *v25) )
      {
        if ( !a4 || *(_DWORD *)(v43[0] + 20LL) == a4 )
        {
          v26 = *a1;
          v27 = *v25;
          v28 = *(_QWORD *)(*a1 + 16);
          v29 = *(_QWORD *)(*a1 + 8);
          if ( *(_QWORD *)(*a1 + 24) < (unsigned __int64)(v28 + 1) )
          {
            v41 = *v25;
            v39 = qvector_reserve(v26 + 8, v29, v28 + 1, 4);
            *(_QWORD *)(v26 + 8) = v39;
            v29 = v39;
            v27 = v41;
            v28 = *(_QWORD *)(v26 + 16);
          }
          *(_DWORD *)(v29 + 4 * v28) = v27;
          ++*(_QWORD *)(v26 + 16);
        }
        if ( ++v25 == (unsigned int *)(*((_QWORD *)v24 + 2) + 4LL * *((_QWORD *)v24 + 3)) )
          return a1;
      }
      if ( under_debugger )
LABEL_48:
        BUG();
      interr(30570);
    }
    else
    {
      v31 = *(_DWORD *)(a3 + 68);
      if ( !v31 )
        return a1;
      v32 = *(_DWORD *)(a3 + 16);
      v33 = v31 + v32;
      if ( v33 < (unsigned __int64)(v13 >> 3) )
      {
        v34 = v32 + 1;
        if ( v33 >= v34 )
        {
          while ( 1 )
          {
            v35 = *(_QWORD *)(v12 + 8LL * v34);
            if ( *(_DWORD *)(v35 + 64) == v9 && (!a4 || *(_DWORD *)(v35 + 20) == a4) )
            {
              v36 = *a1;
              v37 = *(_QWORD *)(*a1 + 16);
              v38 = *(_QWORD *)(*a1 + 8);
              if ( *(_QWORD *)(*a1 + 24) < (unsigned __int64)(v37 + 1) )
              {
                v40 = qvector_reserve(v36 + 8, v38, v37 + 1, 4);
                *(_QWORD *)(v36 + 8) = v40;
                v38 = v40;
                v37 = *(_QWORD *)(v36 + 16);
              }
              *(_DWORD *)(v38 + 4 * v37) = v34;
              ++*(_QWORD *)(v36 + 16);
            }
            if ( v33 < ++v34 )
              break;
            v12 = *a2;
            v9 = v42;
          }
        }
        return a1;
      }
    }
    if ( !under_debugger )
      interr(30561);
    goto LABEL_48;
  }
  return a1;
}

