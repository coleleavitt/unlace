__int64 __fastcall sub_53340(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // al
  __int64 v4; // rdi
  __int64 *v6; // rbx
  int v7; // ebp
  __int64 v8; // rax
  __int64 *v9; // [rsp+0h] [rbp-78h] BYREF
  __int128 v10; // [rsp+8h] [rbp-70h]
  char v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v9 = nullptr;
  v10 = 0;
  v2 = sub_135E0(a1, a2);
  v3 = sub_4A050(v2 + 864, (__int64 *)&v9);
  v4 = (__int64)v9;
  if ( v3 )
  {
    idcv_object();
    v11 = 2;
    v12 = v10;
    v13 = 0;
    set_idcv_attr();
    free_idcv();
    v6 = v9;
    if ( 8LL * (_QWORD)v10 )
    {
      v7 = 0;
      do
      {
        v8 = *v6;
        v11 = 2;
        v13 = 0;
        v12 = v8;
        ++v7;
        set_idcv_slice();
        ++v6;
        free_idcv();
        v4 = (__int64)v9;
      }
      while ( v6 != &v9[(_QWORD)v10] );
    }
    else
    {
      v4 = (__int64)v9;
    }
  }
  if ( v4 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return 0;
}

