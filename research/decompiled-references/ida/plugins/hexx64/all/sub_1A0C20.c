unsigned __int64 __fastcall sub_1A0C20(
        _QWORD *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v19[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( a3 != -1 )
  {
    if ( a3 >= *(_DWORD *)(*a1 + 64LL) )
      sub_195140(a7);
    v8 = a1[1];
    v9 = *(_QWORD *)(*(_QWORD *)(*a1 + 528LL) + 8LL * a3);
    if ( !v8 )
    {
      if ( !under_debugger )
        sub_383060(0xC955u, a7);
      BUG();
    }
    v10 = *(_QWORD *)(v9 + 48);
    if ( v10 )
    {
      v11 = *(_QWORD **)v8;
      v12 = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)v8 != v12 )
        goto LABEL_8;
LABEL_12:
      v13 = *(_QWORD **)(v8 + 56);
      v14 = &v13[*(_QWORD *)(v8 + 64)];
      if ( v13 == v14 )
        goto LABEL_17;
      while ( v10 != *v13 )
      {
        if ( v14 == ++v13 )
          goto LABEL_17;
      }
      if ( v14 == v13 )
      {
LABEL_17:
        sub_127A20((__int64)v18, v9, v10, 0, a5, a6, a7, a8);
        sub_64280(a2, v18, a7);
        sub_316CB0(a2 + 2, v19, v15, v16);
        if ( v19[0] )
        {
          v19[1] = nullptr;
          qfree((__int64)v19[0]);
        }
        qfree(v18[0]);
        v10 = *(_QWORD *)(v10 + 8);
        if ( v10 )
          goto LABEL_11;
      }
      else
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v10 + 8);
          if ( !v10 )
            break;
LABEL_11:
          v8 = a1[1];
          v11 = *(_QWORD **)v8;
          v12 = *(_QWORD *)v8 + 8LL * *(_QWORD *)(v8 + 8);
          if ( *(_QWORD *)v8 == v12 )
            goto LABEL_12;
LABEL_8:
          while ( v10 != *v11 )
          {
            if ( (_QWORD *)v12 == ++v11 )
              goto LABEL_12;
          }
          if ( (_QWORD *)v12 == v11 )
            goto LABEL_12;
        }
      }
    }
  }
  return v20 - __readfsqword(0x28u);
}

