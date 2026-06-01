__int64 __fastcall sub_119A60(__int64 a1)
{
  __int64 result; // rax

  sub_119360(a1);
  *(_BYTE *)a1 = 11;
  result = qstrdup();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}

