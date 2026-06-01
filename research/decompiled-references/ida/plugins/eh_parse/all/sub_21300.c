__int64 sub_21300()
{
  __int64 result; // rax
  __int64 v1; // [rsp+8h] [rbp-120h] BYREF
  _QWORD v2[3]; // [rsp+10h] [rbp-118h] BYREF
  __int16 v3; // [rsp+28h] [rbp-100h]
  __int64 v4; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v5; // [rsp+108h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  result = getinf(93);
  if ( !result )
  {
    netnode_check(v2, "$ PE header", 0, 0);
    result = netnode_altval(v2[0], -2, 65);
    if ( !result )
    {
      netnode_check(&v1, "$ PE header", 0, 0);
      if ( (unsigned __int64)netnode_valobj(v1, v2, 248) <= 0x97 )
        return -1;
      result = v4;
      if ( v3 != 523 )
        result = HIDWORD(v4);
    }
  }
  if ( (unsigned __int64)(result - 1) > 0xFFFFFFFFFFFFFFFDLL )
    return -1;
  return result;
}

