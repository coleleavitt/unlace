__int64 __fastcall sub_3F2C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, char a5)
{
  _QWORD *v5; // rdi
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v5 = *(_QWORD **)(a1 + 8);
  v10[1] = __readfsqword(0x28u);
  v10[0] = 0;
  if ( a4 && a5 )
  {
    v7 = *a4;
    v10[0] = *a4;
    result = sub_3EBA0(v5, a3, &v9, v10, 0, nullptr);
LABEL_4:
    *a4 = v7;
    return result;
  }
  result = sub_3EBA0(v5, a3, &v9, v10, 0, nullptr);
  if ( a4 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  return result;
}

