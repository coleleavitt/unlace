__int64 __fastcall sub_E630(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 v3; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  unsigned __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  struct _Unwind_Exception *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 *v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rdx
  int v30; // edx
  _OWORD *v31; // [rsp+0h] [rbp-478h]
  int v32; // [rsp+8h] [rbp-470h]
  unsigned int v33; // [rsp+Ch] [rbp-46Ch]
  unsigned int v34; // [rsp+Ch] [rbp-46Ch]
  __int64 (__fastcall **v35)(); // [rsp+10h] [rbp-468h] BYREF
  __int128 v36; // [rsp+18h] [rbp-460h]
  _BYTE v37[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v38; // [rsp+438h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 200);
  if ( (_DWORD)v3 )
  {
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v28 = *(_DWORD *)(a1 + 72) == 23126;
      v29 = *(_QWORD *)(a1 + 592);
      v35 = off_35498;
      if ( v28 )
        v30 = v29 + 40;
      else
        v30 = *(unsigned __int16 *)(a1 + 92) + (_DWORD)v29 + 24;
      sub_DD10(a1, (__int64)a2, v30, *(unsigned __int16 *)(a1 + 78), (__int64)&v35);
      v3 = *(unsigned int *)(a1 + 200);
    }
    v32 = 0;
    v31 = a3 + 4;
    while ( 1 )
    {
      v7 = v3 + 20LL * v32;
      a3[8] = 0;
      *v31 = 0;
      if ( a2 )
      {
        if ( *a2 == 3 )
          break;
      }
      v8 = *(_QWORD *)(a1 + 16) - 1LL;
      if ( v8 < 0 )
        goto LABEL_11;
      v9 = *(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32;
      while ( (unsigned __int64)(unsigned int)v7 < *(_QWORD *)v9
           || (unsigned __int64)(unsigned int)v7 >= *(_QWORD *)(v9 + 8) )
      {
        --v8;
        v9 -= 32;
        if ( v8 == -1 )
          goto LABEL_11;
      }
      v16 = *(_QWORD *)(v9 + 16);
      v17 = (unsigned int)v7 + v16 - *(_QWORD *)v9;
      if ( v17 == -1 )
      {
LABEL_11:
        qlseek();
        goto LABEL_12;
      }
      v18 = (unsigned int)(v16 + *(_DWORD *)(v9 + 24));
      if ( v17 < v18 )
      {
        v34 = v16 + *(_DWORD *)(v9 + 24);
        qlseek();
        v19 = (unsigned int)(v17 + 20);
        if ( v19 >= v17 )
        {
          if ( (unsigned int)v19 >= v34 )
          {
            v20 = *(unsigned int *)(a1 + 156);
            if ( (unsigned int)v20 <= (unsigned int)v17 || (unsigned int)v20 >= (int)v17 + 20 )
              v20 = v18;
            v21 = (struct _Unwind_Exception *)(v20 - v17);
            if ( (__int64)v21 < 0 )
            {
              if ( !under_debugger )
              {
                interr();
                if ( v35 )
                {
                  *(_QWORD *)&v36 = 0;
                  qfree();
                }
                _Unwind_Resume(v21);
              }
              BUG();
            }
LABEL_36:
            if ( (struct _Unwind_Exception *)qlread() == v21 )
              goto LABEL_12;
            goto LABEL_37;
          }
LABEL_56:
          v21 = (struct _Unwind_Exception *)&dword_14;
          goto LABEL_36;
        }
      }
LABEL_37:
      a3[8] = 0;
      *v31 = 0;
      v22 = *(_QWORD *)(a1 + 16);
      v23 = v22 - 1;
      if ( v22 - 1 < 0 )
        goto LABEL_42;
      v24 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 32 * v22 - 32);
      v25 = *(_QWORD *)(a1 + 16) - 1LL;
      v26 = v24;
      while ( v7 < *v26 || v7 >= v26[1] )
      {
        --v25;
        v26 -= 4;
        if ( v25 == -1 )
          goto LABEL_42;
      }
      if ( v7 + v26[2] - *v26 == -1 )
        goto LABEL_42;
      v27 = v7 + 19;
      while ( v27 < *v24 || v27 >= v24[1] )
      {
        --v23;
        v24 -= 4;
        if ( v23 == -1 )
          goto LABEL_42;
      }
      if ( v24[2] + v27 - *v24 == -1 )
      {
LABEL_42:
        result = (*(__int64 (__fastcall **)(unsigned int *, unsigned __int64))(*(_QWORD *)a3 + 24LL))(a3, v7);
        if ( (_DWORD)result )
          return result;
      }
LABEL_12:
      if ( !a3[7] )
        return 0;
      v10 = a3[8];
      if ( !(_DWORD)v10 )
        return 0;
      v11 = a3[4];
      v33 = a3[4];
      (**(void (__fastcall ***)(__int64, _DWORD *))a1)(a1, a2);
      v37[0] = 0;
      qlgetz();
      if ( !v37[0] )
        return 0;
      v36 = 0;
      v35 = nullptr;
      if ( (unsigned __int8)idb_utf8() )
        qstrncpy();
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      v12 = *(_QWORD *)(a1 + 16) - 1LL;
      if ( v12 < 0 )
        goto LABEL_24;
      v13 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
      while ( v11 < *v13 || v11 >= v13[1] )
      {
        --v12;
        v13 -= 4;
        if ( v12 == -1 )
          goto LABEL_24;
      }
      if ( v11 + v13[2] - *v13 == -1 || v33 < *(_DWORD *)(a1 + 156) )
      {
LABEL_24:
        v11 = v10;
      }
      else if ( *(_DWORD *)(a1 + 152) - 1 < v33 )
      {
        v11 = v10;
      }
      v14 = *(_QWORD *)(a1 + 584) + v10;
      result = (**(__int64 (__fastcall ***)(unsigned int *, _BYTE *, __int64, unsigned __int64))a3)(a3, v37, v14, v11);
      if ( (_DWORD)result )
        return result;
      result = sub_E270(a1, (__int64)a2, v14, v11, (__int64)a3);
      if ( (_DWORD)result )
        return result;
      ++v32;
      v3 = *(unsigned int *)(a1 + 200);
    }
    qlseek();
    goto LABEL_56;
  }
  return 0;
}

