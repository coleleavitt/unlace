char __fastcall sub_43440(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  char result; // al
  int v4; // [rsp+Ch] [rbp-1Ch] BYREF
  __int64 v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = 0x7FFFFFDE068LL;
  v4 = a1;
  v5[1] = __readfsqword(0x28u);
  v2 = qword_753F8;
  if ( !*(_BYTE *)(qword_753F8 + 121) )
    v1 = 2147344436;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(qword_753F8 + 48) + 72LL))(
             *(_QWORD *)(qword_753F8 + 48),
             24,
             v1,
             v5);
  if ( result )
    return (unsigned int)sub_26D50(*(_QWORD *)(v2 + 4832), v5[0], (__int64)&v4, 4u) == 0;
  return result;
}

