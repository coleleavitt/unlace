__int64 sub_3A8600()
{
  __int64 result; // rax

  result = operator new(0x48u);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 40) = result + 24;
  *(_QWORD *)(result + 48) = result + 24;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_WORD *)(result + 64) = 1;
  return result;
}

