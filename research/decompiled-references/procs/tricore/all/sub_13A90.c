const char *__fastcall sub_13A90(__int64 a1, _BYTE *a2, double a3, double a4, double a5, double a6)
{
  const char *result; // rax
  unsigned __int64 *segm_by_name; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  bool v11; // cf
  unsigned __int64 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-440h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-430h] BYREF
  char v16[1032]; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v17; // [rsp+428h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( *a2 == 59 )
    return sub_13380((_BYTE *)a1, (__int64 *)(a1 + 56), a2);
  v16[1023] = 0;
  if ( (unsigned int)qsscanf(a2, "mapaddr from %a to %1023s", &v13, v16) != 2 )
    return sub_13380((_BYTE *)a1, (__int64 *)(a1 + 56), a2);
  if ( *(int *)(a1 + 80) >= 0 )
    return nullptr;
  if ( v16[0] == 48 && v16[1] == 120 )
  {
    if ( (unsigned int)qsscanf(v16, "0x%a:0x%a", &v14, &v15) != 2 )
      return "syntax error";
    v10 = v15;
    v9 = v14;
    goto LABEL_9;
  }
  segm_by_name = (unsigned __int64 *)get_segm_by_name(v16);
  if ( segm_by_name )
  {
    v9 = *segm_by_name;
    v10 = segm_by_name[1];
    v14 = *segm_by_name;
    v15 = v10;
LABEL_9:
    v11 = v10 < v9;
    v12 = v10 - v9;
    if ( v11 )
      return "invalid target";
    if ( __CFADD__(v12, v13) )
      return "mapped segment is too big";
    if ( !(unsigned __int8)add_mapping() )
    {
      sub_93F0((__int64)"Failed adding mapping: [%a, %a] to [%a, %a]\n", a3, a4, a5, a6);
      return sub_13380((_BYTE *)a1, (__int64 *)(a1 + 56), a2);
    }
    return nullptr;
  }
  sub_132C0((__int64 *)(a1 + 104), (__int64)"unknown segment: %s", v16);
  result = (const char *)&unk_1D228;
  if ( *(_QWORD *)(a1 + 112) )
    return *(const char **)(a1 + 104);
  return result;
}
