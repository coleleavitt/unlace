__int64 __fastcall sub_18340(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r12d
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v25; // eax
  _QWORD v26[5]; // [rsp+0h] [rbp-28h] BYREF

  v26[1] = __readfsqword(0x28u);
  if ( a3 == 128 )
    goto LABEL_11;
  if ( a3 > 0x10 )
  {
    if ( a3 != 176 )
    {
      if ( a3 != 256 )
      {
        if ( a3 == 112 )
        {
          v4 = *(_DWORD *)(a1 + 120);
          if ( (v4 & 0xFFFFFFFB) == 0 )
          {
LABEL_7:
            v5 = *((_QWORD *)a2 + 1);
            if ( v5 )
            {
              *((_QWORD *)a2 + 2) = 0;
              qfree(v5);
              *((_QWORD *)a2 + 1) = 0;
              *((_QWORD *)a2 + 3) = 0;
            }
            sub_15D60((__int64)a2, 0, 10, 17);
            *(_QWORD *)a2 = 0x800000001LL;
            return 1;
          }
          goto LABEL_23;
        }
        if ( a3 == 64 )
        {
          v4 = *(_DWORD *)(a1 + 120);
          if ( (v4 & 0xFFFFFFFB) == 0 )
            goto LABEL_7;
LABEL_23:
          if ( (unsigned int)(v4 - 1) <= 1 || (unsigned int)(v4 - 5) <= 2 )
          {
            v13 = *((_QWORD *)a2 + 1);
            if ( v13 )
            {
              *((_QWORD *)a2 + 2) = 0;
              qfree(v13);
              *((_QWORD *)a2 + 1) = 0;
              *((_QWORD *)a2 + 3) = 0;
            }
            sub_15D60((__int64)a2, 0, 10, 17);
            v14 = *((_QWORD *)a2 + 4);
            if ( v14 )
            {
              *((_QWORD *)a2 + 5) = 0;
              qfree(v14);
              *((_QWORD *)a2 + 4) = 0;
              *((_QWORD *)a2 + 6) = 0;
            }
            sub_15D60((__int64)a2, 1, 42, 49);
            *(_QWORD *)a2 = 0x1000000006LL;
            return 1;
          }
        }
        return 0;
      }
LABEL_11:
      v7 = *((_QWORD *)a2 + 1);
      *a2 = 0;
      if ( v7 )
      {
        *((_QWORD *)a2 + 2) = 0;
        qfree(v7);
        *((_QWORD *)a2 + 1) = 0;
        *((_QWORD *)a2 + 3) = 0;
      }
      v8 = *((_QWORD *)a2 + 4);
      if ( v8 )
      {
        *((_QWORD *)a2 + 5) = 0;
        qfree(v8);
        *((_QWORD *)a2 + 4) = 0;
        *((_QWORD *)a2 + 6) = 0;
      }
      v9 = *((_QWORD *)a2 + 2);
      v10 = *a2;
      a2[1] = v9;
      if ( (unsigned int)v10 <= 6 )
      {
        v11 = 84;
        if ( _bittest64(&v11, v10) )
          a2[1] = a2[10] + v9;
      }
      return 1;
    }
    if ( (unsigned __int64)getinf(88) > 0x397 )
    {
LABEL_38:
      v23 = *((_QWORD *)a2 + 1);
      if ( v23 )
      {
        *((_QWORD *)a2 + 2) = 0;
        qfree(v23);
        *((_QWORD *)a2 + 1) = 0;
        *((_QWORD *)a2 + 3) = 0;
      }
      sub_15D60((__int64)a2, 0, 10, 17);
      sub_15D60((__int64)a2, 0, 8, 9);
      sub_15D60((__int64)a2, 0, 18, 23);
      v24 = *((_QWORD *)a2 + 4);
      if ( v24 )
      {
        *((_QWORD *)a2 + 5) = 0;
        qfree(v24);
        *((_QWORD *)a2 + 4) = 0;
        *((_QWORD *)a2 + 6) = 0;
      }
      sub_15D60((__int64)a2, 1, 42, 49);
      sub_15D60((__int64)a2, 1, 40, 41);
      sub_15D60((__int64)a2, 1, 50, 55);
      v25 = a2[4] + *((_QWORD *)a2 + 5);
      *a2 = 2;
      a2[1] = v25;
      return 1;
    }
LABEL_31:
    if ( !(unsigned __int8)getinf_flag(3, 4, v15, v16, v17, v18) )
      goto LABEL_11;
    netnode_check(v26, "$ golang", 0, 0);
    v19 = netnode_altval(v26[0], 0, 65);
    if ( v19 <= 0x74 )
      goto LABEL_11;
    v20 = *(_DWORD *)(get_ph() + 4);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 - 13);
      if ( (unsigned int)v21 > 0x3B )
        goto LABEL_11;
      v22 = 0x800000000000005LL;
      if ( !_bittest64(&v22, v21) || v19 == 117 )
        goto LABEL_11;
    }
    if ( a3 != 176 )
      return 0;
    goto LABEL_38;
  }
  v12 = getinf(99);
  if ( v12 == 256 )
    goto LABEL_11;
  if ( v12 != 176 )
    return 0;
  if ( (unsigned __int64)getinf(88) <= 0x397 )
    goto LABEL_31;
  return 0;
}
