__int64 sub_33A2E0()
{
  __int64 result; // rax

  result = *(_QWORD *)(get_module_data() + 840);
  *(_BYTE *)(result + 286) |= 1u;
  return result;
}

