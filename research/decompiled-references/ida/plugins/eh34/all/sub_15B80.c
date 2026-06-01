__int64 __fastcall sub_15B80(__int64 a1)
{
  __int64 v1; // rdi
  __int64 (*v2)(void); // rax
  __int64 v3; // rdi
  __int64 (*v4)(void); // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  v2 = **(__int64 (***)(void))v1;
  if ( v2 != sub_15B80 )
    return v2();
  v3 = *(_QWORD *)(v1 + 8);
  v4 = **(__int64 (***)(void))v3;
  if ( v4 != v2 )
    return v4();
  v5 = *(_QWORD *)(v3 + 8);
  v2 = **(__int64 (***)(void))v5;
  if ( v2 != v4 )
    return v2();
  v6 = *(_QWORD *)(v5 + 8);
  v4 = **(__int64 (***)(void))v6;
  if ( v4 != v2 )
    return v4();
  v7 = *(_QWORD *)(v6 + 8);
  v2 = **(__int64 (***)(void))v7;
  if ( v2 != v4 )
    return v2();
  v8 = *(_QWORD *)(v7 + 8);
  v4 = **(__int64 (***)(void))v8;
  if ( v4 != v2 )
    return v4();
  v9 = *(_QWORD *)(v8 + 8);
  v2 = **(__int64 (***)(void))v9;
  if ( v2 == v4 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    v4 = **(__int64 (***)(void))v10;
    if ( v4 == v2 )
      return (***(__int64 (__fastcall ****)(_QWORD))(v10 + 8))(*(_QWORD *)(v10 + 8));
    return v4();
  }
  return v2();
}

