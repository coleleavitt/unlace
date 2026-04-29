__int64 __fastcall sub_101540(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  __int64 (__fastcall ***v8)(_QWORD, unsigned __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, unsigned __int64 *); // rax
  unsigned __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  char v11; // [rsp+8h] [rbp-20h]
  int v12; // [rsp+Ch] [rbp-1Ch]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v2 = *a2;
  v3 = a1[4];
  v13 = __readfsqword(0x28u);
  result = 0;
  if ( v2 < v3 )
  {
    v5 = a2[1];
    v6 = a1[3];
    v7 = v2 + v5;
    if ( v6 < v7 )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, unsigned __int64 *))a1[2];
      if ( v2 < v6 )
        v2 = v6;
      v9 = **v8;
      if ( v3 > v7 )
        LODWORD(v3) = v7;
      v10 = v2 - v6;
      v11 = 5;
      v12 = v3 - v2;
      return v9(v8, &v10);
    }
  }
  return result;
}
