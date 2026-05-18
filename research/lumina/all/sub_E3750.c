__int64 __fastcall sub_E3750(__int64 a1)
{
  __int64 result; // rax

  result = sub_E36C0(a1, "json_each", (__int64)&unk_240FA0, 0, nullptr);
  if ( !(_DWORD)result )
    return sub_E36C0(a1, "json_tree", (__int64)&unk_240EE0, 0, nullptr);
  return result;
}
