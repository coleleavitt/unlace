char *__fastcall sub_817F0(__int64 a1, __int64 a2, int a3)
{
  char *v3; // rbx

  v3 = (char *)&unk_CC8E0 + 1024 * (__int64)dword_D08E0;
  dword_D08E0 = (dword_D08E0 + 1) % 16;
  qsnprintf(v3, 1024, "<%llu (CU %d@%llu+%llu)>", a1, a3, a2, a1 - a2);
  return v3;
}
