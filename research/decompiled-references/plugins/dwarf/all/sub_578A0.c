unsigned __int64 __fastcall sub_578A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r12
  _QWORD *v10; // rax
  const void *v11; // rsi
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  _QWORD *v15; // r8
  _DWORD *v16; // r13
  _QWORD *v17; // rax
  _DWORD **v18; // rbx
  _DWORD *v19; // rbp
  unsigned int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  unsigned int v25; // eax
  int v26; // r8d
  int v27; // r9d
  __int64 v29; // rdx
  int v30; // esi
  __int64 *v31; // rdi
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  _QWORD *v42; // [rsp+8h] [rbp-80h]
  _QWORD *v43; // [rsp+10h] [rbp-78h] BYREF
  __int128 v44; // [rsp+18h] [rbp-70h]
  __int64 *v45; // [rsp+30h] [rbp-58h] BYREF
  __int128 v46; // [rsp+38h] [rbp-50h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v6 = 0;
    if ( a3 )
    {
      v7 = *a1 + 8 * a1[1];
      v8 = (_QWORD *)*a1;
      if ( *a1 != v7 )
      {
        do
        {
          if ( a3 == *v8 )
            break;
          ++v8;
        }
        while ( (_QWORD *)v7 != v8 );
      }
      v6 = (((__int64)v8 - *a1) >> 3) + 1;
    }
    v9 = v3;
    v43 = nullptr;
    v44 = 0;
    v10 = (_QWORD *)qalloc_or_throw(8 * v3);
    v11 = *(const void **)a2;
    *((_QWORD *)&v44 + 1) = v3;
    v43 = v10;
    memcpy(v10, v11, 8 * v3);
    *(_QWORD *)&v44 = v3;
    v12 = v43;
LABEL_9:
    while ( 2 )
    {
      while ( 2 )
      {
        v13 = a1[1];
        if ( v6 >= v13 )
        {
          v15 = &v12[v9];
          if ( v13 != v6 )
            continue;
          goto LABEL_18;
        }
        break;
      }
      v14 = v6;
LABEL_11:
      v15 = &v12[v9];
      v16 = *(_DWORD **)(*a1 + 8 * v14);
      if ( &v12[v9] != v12 )
      {
        v17 = v12;
        while ( v16 != (_DWORD *)*v17 )
        {
          if ( v15 == ++v17 )
            goto LABEL_28;
        }
        if ( v15 != v17 )
          goto LABEL_16;
      }
LABEL_28:
      v29 = *(_QWORD *)(*a1 + 8 * v14);
      v45 = nullptr;
      v46 = 0;
      sub_57000(a1, (__int64 *)&v45, v29);
      if ( !(_QWORD)v46 )
        goto LABEL_29;
      if ( (int)v46 > 0 )
      {
        v30 = 0;
        v31 = v45;
        v32 = &v43[v44];
        while ( 1 )
        {
          v33 = *v31;
          if ( v43 == v32 )
            goto LABEL_48;
          v34 = v43;
          while ( v33 != *v34 )
          {
            if ( v32 == ++v34 )
              goto LABEL_48;
          }
          if ( v34 == v32 )
          {
LABEL_48:
            if ( *(_DWORD *)(v33 + 336) != 5 )
            {
              if ( (_DWORD)v46 == v30 )
                goto LABEL_40;
LABEL_29:
              if ( v45 )
              {
                *(_QWORD *)&v46 = 0;
                qfree(v45);
              }
              v12 = v43;
              v9 = v44;
              v15 = &v43[v44];
LABEL_16:
              if ( ++v14 >= v13 )
              {
                if ( v13 == v14 )
                  goto LABEL_18;
                goto LABEL_9;
              }
              goto LABEL_11;
            }
          }
          ++v30;
          ++v31;
          if ( (_DWORD)v46 == v30 )
            goto LABEL_40;
        }
      }
      if ( (_DWORD)v46 )
        goto LABEL_29;
LABEL_40:
      v35 = v44;
      if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
      {
        v36 = qvector_reserve(&v43, v43, v44 + 1, 8);
        v43 = (_QWORD *)v36;
        v35 = v44;
      }
      else
      {
        v36 = (__int64)v43;
      }
      *(_QWORD *)(v36 + 8 * v35) = v16;
      *(_QWORD *)&v44 = v44 + 1;
      if ( (debug & 0x400000) != 0 )
      {
        v37 = (unsigned int)sub_575D0(v16);
        sub_88B80((unsigned int)"All references to %s will be dropped. Dropping too.\n", v37, v38, v39, v40, v41);
      }
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
      v12 = v43;
      v9 = v44;
      v15 = &v43[v44];
      if ( v13 != v14 )
        continue;
      break;
    }
LABEL_18:
    if ( v12 != v15 )
    {
      v18 = (_DWORD **)v12;
      do
      {
        v19 = *v18;
        if ( (debug & 0x400000) != 0 )
        {
          v42 = v15;
          v20 = (unsigned int)sub_575D0(*v18);
          sub_88B80((unsigned int)"Marking %s for drop\n", v20, v21, v22, v23, v24);
          v15 = v42;
          if ( (debug & 0x400000) != 0 )
          {
            v25 = (unsigned int)sub_575D0(v19);
            sub_88B80((unsigned int)"%s::set_action(act=%s, ord=%u)\n", v25, (unsigned int)"act_drop", 0, v26, v27);
            v15 = v42;
          }
        }
        v19[84] = 5;
        ++v18;
      }
      while ( v15 != v18 );
      v15 = v43;
    }
    if ( v15 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v15);
    }
  }
  return v47 - __readfsqword(0x28u);
}
