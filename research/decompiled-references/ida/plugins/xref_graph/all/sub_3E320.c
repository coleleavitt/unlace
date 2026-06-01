__int64 __fastcall sub_3E320(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  result = *(unsigned __int8 *)(a2 + 8);
  *(_BYTE *)(a1 + 8) = result;
  return result;
}

