unsigned __int64 __fastcall ida_mcp::tools::cpp_class_recovery::ensure_recovery_done(
        ida_mcp::tools::cpp_class_recovery *this)
{
  _QWORD *v2; // rbp
  void *v3; // r12
  _QWORD *v4; // rbx
  void *v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rbp
  void *v8; // r12
  _QWORD *v9; // rbx
  void *v10; // rdi
  char v11[24]; // [rsp+10h] [rbp-68h] BYREF
  void *v12; // [rsp+28h] [rbp-50h]
  _QWORD *v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  void *v15; // [rsp+40h] [rbp-38h]
  _QWORD *v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-28h]
  unsigned __int64 v18; // [rsp+58h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  netnode_check();
  if ( !(unsigned __int8)netnode_exist() )
  {
    if ( get_name_ea() == -1 && get_name_ea() == -1 && get_name_ea() == -1 )
    {
      netnode_check();
      return v18 - __readfsqword(0x28u);
    }
    ida_mcp::tools::cpp_class_recovery::`anonymous namespace'::run_recovery_pipeline(
      (ida_mcp::tools::cpp_class_recovery::_anonymous_namespace_ *)v11,
      0,
      1);
    v2 = v16;
    v3 = v15;
    if ( v16 == v15 )
    {
LABEL_8:
      if ( !v3 )
        goto LABEL_10;
    }
    else
    {
      v4 = v15;
      do
      {
        while ( 1 )
        {
          v5 = (void *)v4[4];
          if ( !v5 )
            break;
          v6 = v4[6];
          v4 += 7;
          operator delete(v5, v6 - (_QWORD)v5);
          if ( v2 == v4 )
            goto LABEL_8;
        }
        v4 += 7;
      }
      while ( v2 != v4 );
      if ( !v3 )
      {
LABEL_10:
        v7 = v13;
        v8 = v12;
        if ( v13 == v12 )
        {
LABEL_18:
          if ( !v8 )
          {
LABEL_20:
            netnode_check();
            return v18 - __readfsqword(0x28u);
          }
        }
        else
        {
          v9 = v12;
          do
          {
            while ( 1 )
            {
              v10 = (void *)v9[8];
              if ( v10 )
                operator delete(v10, v9[10] - (_QWORD)v10);
              if ( v9[5] )
              {
                v9[6] = 0;
                qfree();
              }
              if ( !v9[2] )
                break;
              v9[3] = 0;
              v9 += 11;
              qfree();
              if ( v7 == v9 )
                goto LABEL_18;
            }
            v9 += 11;
          }
          while ( v7 != v9 );
          if ( !v8 )
            goto LABEL_20;
        }
        operator delete(v8, v14 - (_QWORD)v8);
        goto LABEL_20;
      }
    }
    operator delete(v3, v17 - (_QWORD)v3);
    goto LABEL_10;
  }
  return v18 - __readfsqword(0x28u);
}

