__int64 __fastcall sub_534A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  char v5; // al
  __int64 v6; // rdi
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-78h] BYREF
  __int128 v12; // [rsp+8h] [rbp-70h]
  char v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+30h] [rbp-48h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  v16 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  v4 = sub_135E0(a1, a2);
  v5 = sub_4E0E0(v4 + 864, &v11, v2, v3);
  v6 = v11;
  if ( v5 )
  {
    idcv_object();
    v13 = 2;
    v14 = v12;
    v15 = 0;
    set_idcv_attr();
    free_idcv();
    v8 = v11;
    if ( 16LL * (_QWORD)v12 )
    {
      v9 = 0;
      do
      {
        v10 = *(char *)(v8 + 8);
        v13 = 2;
        v15 = 0;
        v14 = v10;
        ++v9;
        set_idcv_slice();
        v8 += 16;
        free_idcv();
        v6 = v11;
      }
      while ( v8 != v11 + 16LL * (_QWORD)v12 );
    }
    else
    {
      v6 = v11;
    }
  }
  if ( v6 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return 0;
}

