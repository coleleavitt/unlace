__int64 __fastcall sub_2F7A0(_QWORD *a1, __int64 a2, const char *a3, int a4)
{
  size_t v8; // r14
  void *v9; // r14
  _QWORD *v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // r15
  _QWORD *v13; // rax
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // rdx
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned int v26; // ebx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdx
  void *v32; // [rsp+10h] [rbp-58h] BYREF
  __int128 v33; // [rsp+18h] [rbp-50h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  qmutex_lock();
  v32 = nullptr;
  v33 = 0;
  if ( a3 )
  {
    v8 = strlen(a3);
    v32 = (void *)qvector_reserve();
    *(_QWORD *)&v33 = v8 + 1;
    memmove(v32, a3, v8);
    *((_BYTE *)v32 + v8) = 0;
    v9 = v32;
    v10 = sub_245C0((__int64)(a1 + 41), (__int64)&v32);
    if ( v9 )
    {
      *(_QWORD *)&v33 = 0;
      qfree();
    }
  }
  else
  {
    v10 = sub_245C0((__int64)(a1 + 41), (__int64)&v32);
  }
  if ( v10 == a1 + 42 || (v11 = v10[7], !(16LL * v10[8])) )
  {
LABEL_27:
    v26 = 0;
  }
  else
  {
    v12 = a1 + 36;
    while ( 1 )
    {
      v13 = (_QWORD *)a1[37];
      v14 = *(_QWORD *)(v11 + 8);
      if ( v13 )
      {
        v15 = a1 + 36;
        do
        {
          while ( 1 )
          {
            v16 = v13[2];
            v17 = v13[3];
            if ( v13[4] < v14 )
              break;
            v15 = v13;
            v13 = (_QWORD *)v13[2];
            if ( !v16 )
              goto LABEL_12;
          }
          v13 = (_QWORD *)v13[3];
        }
        while ( v17 );
LABEL_12:
        if ( v12 != v15 && v14 >= v15[4] )
          goto LABEL_41;
      }
      if ( (unsigned __int8)sub_2B140(a1, v14) )
      {
        v28 = (_QWORD *)a1[37];
        v29 = *(_QWORD *)(v11 + 8);
        if ( v28 )
        {
          v15 = a1 + 36;
          do
          {
            while ( 1 )
            {
              v30 = v28[2];
              v31 = v28[3];
              if ( v28[4] < v29 )
                break;
              v15 = v28;
              v28 = (_QWORD *)v28[2];
              if ( !v30 )
                goto LABEL_36;
            }
            v28 = (_QWORD *)v28[3];
          }
          while ( v31 );
LABEL_36:
          if ( v12 != v15 && v29 >= v15[4] )
          {
LABEL_41:
            v18 = *((_DWORD *)v15 + 10);
            if ( v18 != -1 )
            {
              v19 = v18;
              v20 = *((_DWORD *)v15 + 11);
              v21 = (_QWORD *)(a1[20] + 392 * v19);
              if ( v20 > 0 )
                break;
            }
          }
        }
      }
LABEL_26:
      v11 += 16;
      if ( v11 == v10[7] + 16LL * v10[8] )
        goto LABEL_27;
    }
    v22 = &v21[49 * v20];
    while ( 1 )
    {
      v23 = v21[14];
      v24 = 16LL * v21[15];
      v25 = v23 + v24;
      if ( v24 )
        break;
LABEL_28:
      v21 += 49;
      if ( v21 == v22 )
        goto LABEL_26;
    }
    while ( *(_DWORD *)(v23 + 8) != a4 )
    {
      v23 += 16;
      if ( v23 == v25 )
        goto LABEL_28;
    }
    if ( a2 )
    {
      *(_BYTE *)a2 = *(_BYTE *)v11;
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(a2 + 16) = v21[1];
      *(_QWORD *)(a2 + 24) = *(_QWORD *)v23;
    }
    v26 = 1;
  }
  qmutex_unlock();
  return v26;
}

