_QWORD *__fastcall ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::sanitize_ident(
        _QWORD *a1,
        unsigned __int8 **a2)
{
  _QWORD *v2; // r15
  unsigned __int8 *v3; // r14
  unsigned __int8 *v4; // rbp
  unsigned __int8 *v5; // r14
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  _BYTE *v8; // rax
  unsigned __int8 v9; // r13
  int v10; // eax
  __int64 v11; // r12
  _BYTE *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  _BYTE *v15; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r13
  _BYTE *v19; // rax
  unsigned __int64 v20; // rdx
  _BYTE *v21; // rax

  v2 = a1 + 2;
  a1[1] = 0;
  *((_BYTE *)a1 + 16) = 0;
  *a1 = a1 + 2;
  std::string::reserve();
  v3 = a2[1];
  if ( v3 )
  {
    v4 = *a2;
    v5 = &v3[(_QWORD)*a2];
    if ( v5 != *a2 )
    {
      do
      {
        while ( 1 )
        {
          v9 = *v4;
          v10 = isalnum(*v4);
          v11 = a1[1];
          if ( v9 != 95 && !v10 )
            break;
          v12 = (_BYTE *)*a1;
          if ( v2 == (_QWORD *)*a1 )
            v13 = 15;
          else
            v13 = a1[2];
          v14 = v11 + 1;
          if ( v13 < v11 + 1 )
          {
            std::string::_M_mutate();
            v12 = (_BYTE *)*a1;
            v14 = v11 + 1;
          }
          v12[v11] = v9;
          v15 = (_BYTE *)*a1;
          ++v4;
          a1[1] = v14;
          v15[v11 + 1] = 0;
          if ( v5 == v4 )
            return a1;
        }
        v6 = (_QWORD *)*a1;
        if ( v9 == 58 )
        {
          if ( v11 )
          {
            if ( *((_BYTE *)v6 + v11 - 1) == 58 )
            {
              if ( v2 == v6 )
                v20 = 15;
              else
                v20 = a1[2];
              if ( v20 < v11 + 1 )
              {
                std::string::_M_mutate();
                v6 = (_QWORD *)*a1;
              }
              *((_BYTE *)v6 + v11) = 58;
              v21 = (_BYTE *)*a1;
              a1[1] = v11 + 1;
              v21[v11 + 1] = 0;
              goto LABEL_11;
            }
            if ( v2 == v6 )
              v17 = 15;
            else
              v17 = a1[2];
            v18 = v11 + 1;
            if ( v17 < v11 + 1 )
            {
              std::string::_M_mutate();
              v6 = (_QWORD *)*a1;
            }
          }
          else
          {
            v18 = 1;
          }
          *((_BYTE *)v6 + v11) = 58;
          v19 = (_BYTE *)*a1;
          a1[1] = v18;
          v19[v18] = 0;
        }
        else
        {
          if ( v2 == v6 )
            v7 = 15;
          else
            v7 = a1[2];
          if ( v7 < v11 + 1 )
          {
            std::string::_M_mutate();
            v6 = (_QWORD *)*a1;
          }
          *((_BYTE *)v6 + v11) = 95;
          v8 = (_BYTE *)*a1;
          a1[1] = v11 + 1;
          v8[v11 + 1] = 0;
        }
LABEL_11:
        ++v4;
      }
      while ( v5 != v4 );
    }
  }
  return a1;
}

