__int64 __fastcall sub_BD290(__int64 a1, _BYTE *a2)
{
  _QWORD **v2; // rbx
  unsigned int v3; // ebp
  void *v4; // rdi
  _QWORD v6[5]; // [rsp+0h] [rbp-88h] BYREF
  char v7; // [rsp+28h] [rbp-60h]
  __int64 v8; // [rsp+30h] [rbp-58h]
  int v9; // [rsp+40h] [rbp-48h] BYREF
  void *v10; // [rsp+48h] [rbp-40h]
  int *v11; // [rsp+50h] [rbp-38h]
  int *v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  unsigned __int64 v14; // [rsp+68h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v8 = a1 + 64;
  memset(&v6[1], 0, 32);
  v7 = 0;
  v6[0] = off_4DC040;
  v9 = 0;
  v10 = nullptr;
  v11 = &v9;
  v12 = &v9;
  v13 = 0;
  sub_11E900(a2, (__int64)v6);
  v6[0] = off_4DC040;
  v2 = (_QWORD **)v10;
  v3 = v13;
  if ( v10 )
  {
    do
    {
      sub_B94C0(v2[3]);
      v4 = v2;
      v2 = (_QWORD **)v2[2];
      operator delete(v4, 0x28u);
    }
    while ( v2 );
  }
  return v3;
}

