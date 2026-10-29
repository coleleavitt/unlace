__int64 __fastcall sub_2C2B60(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+0h] [rbp-78h] BYREF
  char v5; // [rsp+10h] [rbp-68h]
  __int64 v6; // [rsp+18h] [rbp-60h]
  _QWORD v7[2]; // [rsp+20h] [rbp-58h] BYREF
  char v8; // [rsp+30h] [rbp-48h]
  __int64 *v9; // [rsp+38h] [rbp-40h]
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v4[1] = a2;
  v5 = 117;
  v4[0] = &off_4E10F0;
  v6 = 0;
  v2 = (__int64 *)sub_2B63F0(a1, v4);
  result = 0;
  if ( v2 )
  {
    v7[1] = a2;
    v8 = 117;
    v7[0] = &off_4E10F0;
    v9 = v2;
    sub_2B6200(a1, (__int64)v7);
    sub_2C29C0(v2);
    qfree((__int64)v2);
    return 1;
  }
  return result;
}

