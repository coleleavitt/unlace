__int64 __fastcall sub_7700(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v9; // r13
  __int64 i; // rbp
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // r15d
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  struct _Unwind_Exception *v23; // rbp
  char v24; // [rsp+0h] [rbp-38h]

  result = (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 856))(*a2);
  if ( result > 0 )
  {
    v9 = result;
    for ( i = 0; i != v9; ++i )
    {
      LODWORD(v11) = i;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_24798 + 840))(*a2, i);
      v13 = *(_QWORD *)(v12 + 8);
      v14 = (__int64 *)v12;
      result = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v13);
      if ( (result & 0x1000000) != 0 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 624))(v14);
        v19 = a1[1];
        v20 = result;
        LODWORD(v11) = result;
        v21 = (_DWORD *)(*a1 + 4 * v19);
        if ( (_DWORD *)*a1 == v21 )
          goto LABEL_14;
        result = *a1;
        while ( (_DWORD)v11 != *(_DWORD *)result )
        {
          result += 4;
          if ( v21 == (_DWORD *)result )
            goto LABEL_14;
        }
        if ( (_DWORD *)result == v21 )
        {
LABEL_14:
          if ( a1[2] < (unsigned __int64)(v19 + 1) )
          {
            v11 = *a1;
            result = qvector_reserve();
            v22 = a1[1];
            *a1 = result;
            v21 = (_DWORD *)(result + 4 * v22);
          }
          *v21 = v20;
          ++a1[1];
        }
        if ( !v14 )
          continue;
        if ( *v14 <= 0 )
        {
          if ( under_debugger )
            BUG();
          v13 = 30469;
          interr();
LABEL_22:
          v23 = (struct _Unwind_Exception *)sub_6C20(v13, v11, v15, v16, v17, v18, v24);
          sub_6DF0(v14, v11, v2, v3, v4, v5);
          _Unwind_Resume(v23);
        }
      }
      else
      {
        if ( !v14 )
          continue;
        if ( *v14 <= 0 )
          goto LABEL_22;
      }
      result = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 984))(v14);
    }
  }
  return result;
}

