__int64 __fastcall sub_10FF0(__int64 a1, __int64 a2, __int64 a3, __m128i *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  int v7; // [rsp+10h] [rbp-38h] BYREF
  void *v8; // [rsp+18h] [rbp-30h]
  int *v9; // [rsp+20h] [rbp-28h]
  int *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  unsigned __int64 v12; // [rsp+38h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v6 = a1;
  v7 = 0;
  v8 = nullptr;
  v9 = &v7;
  v10 = &v7;
  v11 = 0;
  v4 = sub_10C40(&v6, a2, a3, a4, 0);
  sub_BEC0((void **)v8);
  return v4;
}
