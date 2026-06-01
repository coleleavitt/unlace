__int64 __fastcall sub_11140(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, __m128i *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+10h] [rbp-38h] BYREF
  void *v9; // [rsp+18h] [rbp-30h]
  int *v10; // [rsp+20h] [rbp-28h]
  int *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  unsigned __int64 v13; // [rsp+38h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v7 = a1;
  v8 = 0;
  v9 = nullptr;
  v10 = &v8;
  v11 = &v8;
  v12 = 0;
  v5 = sub_FBC0(&v7, a2, a3, a4, a5, 0);
  sub_BEC0((void **)v9);
  return v5;
}

